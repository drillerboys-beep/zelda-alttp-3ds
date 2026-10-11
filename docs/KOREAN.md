# 한국어판 (Korean build)

이 빌드는 SFC판 「젤다의 전설 신들의 트라이포스」 한글패치를 3DS 포팅판에서 쓸 수 있게 한다.
한글 대사, 글꼴, 메뉴 그림, 메뉴 아이템 이름은 사용자가 가진 한글판 롬에서 첫 실행 때 읽어 온다.
나머지 게임 데이터는 같은 폴더에 둔 북미판 원본 롬에서 가져온다. 번역문이나 롬 데이터는 들어 있지 않다.

## 지원 롬

| 용도 | 파일 | 크기 | 확인 기준 |
|---|---|---|---|
| 한글판 | 북미판 + 한글패치(싸이제로, 2013-01-16) | 3,145,728 (헤더 포함 3,146,240) | CRC-32 ad9ec76a (헤더 체크섬 4바이트 제외) |
| 원본 | Legend of Zelda, The - A Link to the Past (USA) | 1,048,576 | SHA-1 6d4f10a8b10e10dbe624cb23cf03b88bb8252973 |

## SD카드

```
sdmc:/3ds/dspfirm.cdc
sdmc:/3ds/Zelda 3DS KR/
    zelda3.sfc            ← 북미판 원본 (헤더 없음)
    <아무 이름>.smc        ← 한글판 롬
```

처음 실행해서 한글판 롬을 고르면 한글 자료를 만든다(한 번만).

## 범위

- 한글: 대사 전체(397개), 메뉴 아이템 이름·능력 표시, 메뉴 그림 글자
- 영어 유지: 파일 선택·이름 입력 화면(원래 한글패치에서도 영어), 아래 화면의 포팅판 자체 메뉴

## 빌드

`platform/3ds/build-kr.sh` (devkitPro 3DS). 별도 타이틀(UniqueId 0xF5A13)이고 게임 안 업데이트 기능은 꺼져 있다.

## 출처

- 한글패치: 싸이제로 (한글로게임 https://www.hangulogame.com/patch/sfc/342/)
- 3DS 포팅판: EstebanPdN (https://github.com/EstebanPdN/zelda-alttp-3ds)
- Zelda3 엔진: snesrev (https://github.com/snesrev/zelda3)
- 한국어판 작업: Mr. Driller
