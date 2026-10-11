#!/usr/bin/env bash
# Korean build: separate title (UniqueId 0xF5A13), SD folder "sdmc:/3ds/Zelda 3DS KR",
# in-game updater disabled. The Korean text/graphics are NOT included; they are read
# from the user's own Korean-patched ROM at first launch.
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/../.." && pwd)"
DEVKITPRO="${DEVKITPRO:-/opt/devkitpro}"
DEVKITARM="${DEVKITARM:-${DEVKITPRO}/devkitARM}"
SDL_BUILD="${ROOT}/build-3ds/sdl"
SDL_PREFIX="${ROOT}/build-3ds/prefix"
GAME_BUILD="${ROOT}/build-3ds-kr/game"
TOOLS_ROOT="${ZELDA3_TOOLS_ROOT:-${ROOT}/../../Tools/bin}"
VERSION="3.2-KR1"

export DEVKITPRO DEVKITARM

if [[ ! -f "${SDL_PREFIX}/lib/cmake/SDL2/SDL2Config.cmake" ]]; then
  cmake \
    -S "${ROOT}/app/jni/SDL2" \
    -B "${SDL_BUILD}" \
    -DCMAKE_TOOLCHAIN_FILE="${DEVKITPRO}/cmake/3DS.cmake" \
    -DCMAKE_INSTALL_PREFIX="${SDL_PREFIX}" \
    -DCMAKE_BUILD_TYPE=Release \
    -DCMAKE_POLICY_VERSION_MINIMUM=3.5 \
    -DSDL_SHARED=OFF \
    -DSDL_STATIC=ON \
    -DSDL_TEST=OFF
  cmake --build "${SDL_BUILD}" --parallel
  cmake --install "${SDL_BUILD}"
fi

cmake \
  -S "${ROOT}/platform/3ds" \
  -B "${GAME_BUILD}" \
  -DCMAKE_TOOLCHAIN_FILE="${DEVKITPRO}/cmake/3DS.cmake" \
  -DCMAKE_BUILD_TYPE=Release \
  -DSDL2_ROOT="${SDL_PREFIX}" \
  -DSDL2_DIR="${SDL_PREFIX}/lib/cmake/SDL2" \
  -DZELDA3_KOREAN_BUILD=ON \
  -DUPDATE_DEPS_ROOT="${UPDATE_DEPS_ROOT:-${DEVKITPRO}/portlibs/3ds}"
cmake --build "${GAME_BUILD}" --parallel

MAKEROM="${MAKEROM:-${TOOLS_ROOT}/makerom}"
BANNERTOOL="${BANNERTOOL:-${TOOLS_ROOT}/bannertool}"
if [[ ! -x "${MAKEROM}" || ! -x "${BANNERTOOL}" ]]; then
  printf '3DSX ready. Set MAKEROM and BANNERTOOL to also build the CIA.\n'
  exit 0
fi

"${BANNERTOOL}" makesmdh \
  -s "Zelda ALttP 3DS (Korean)" \
  -l "A Link to the Past 3DS port - Korean build" \
  -p "EstebanPdN / Korean: Mr. Driller" \
  -i "${ROOT}/platform/3ds/assets/icon.png" \
  -f visible,nosavebackups \
  -o "${GAME_BUILD}/zelda3-3ds.icn"

"${BANNERTOOL}" makebanner \
  -ci "${ROOT}/platform/3ds/assets/banner.cgfx" \
  -a "${ROOT}/platform/3ds/assets/banner.wav" \
  -o "${GAME_BUILD}/zelda3-3ds.bnr"

(
  cd "${ROOT}"
  "${MAKEROM}" \
    -f cia \
    -o "${GAME_BUILD}/zelda3-3ds-kr-v${VERSION}.cia" \
    -DAPP_ROMFS=build-3ds-kr/game/romfs \
    -rsf platform/3ds/cia/zelda3-kr.rsf \
    -target t \
    -exefslogo \
    -elf build-3ds-kr/game/zelda3-3ds.elf \
    -icon build-3ds-kr/game/zelda3-3ds.icn \
    -banner build-3ds-kr/game/zelda3-3ds.bnr
)

printf 'Ready:\n'
printf '  %s\n' "${GAME_BUILD}/zelda3-3ds-kr-v${VERSION}.3dsx"
printf '  %s\n' "${GAME_BUILD}/zelda3-3ds-kr-v${VERSION}.cia"
