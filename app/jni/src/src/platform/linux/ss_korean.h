// Generated: Korean translation glyph table for the bottom screen.
// Maps each syllable used by kSSKoText to its glyph in the Korean ROM font
// (page 0-9 = font page selected by bytes 0x5C-0x65, idx = glyph index).
// Glyph images are read from the user's ROM at runtime; nothing is copied here.
#pragma once
// op: copy `rows` rows starting at src_row of glyph (page, idx), columns [x0, x1), to dst_row.
typedef struct SSKoGlyphOp { uint8_t page, idx, src_row, dst_row, rows, x0, x1; } SSKoGlyphOp;
typedef struct SSKoGlyph { uint16_t cp; uint8_t page, idx; uint8_t op_count; SSKoGlyphOp ops[3]; } SSKoGlyph;
static const SSKoGlyph kSSKoGlyphs[] = {
  {0x0044, 9, 0x03, 0, {{0}}},  // D
  {0x0048, 9, 0x07, 0, {{0}}},  // H
  {0x0055, 9, 0x14, 0, {{0}}},  // U
  {0xac00, 0, 0x06, 0, {{0}}},  // 가
  {0xac70, 0, 0x11, 0, {{0}}},  // 거
  {0xace0, 0, 0x21, 0, {{0}}},  // 고
  {0xace8, 0, 0x23, 0, {{0}}},  // 골
  {0xad6c, 0, 0x2e, 0, {{0}}},  // 구
  {0xb17c, 1, 0x20, 0, {{0}}},  // 논
  {0xb2aa, 1, 0x2d, 0, {{0}}},  // 늪
  {0xb2e4, 1, 0x32, 0, {{0}}},  // 다
  {0xb2e8, 1, 0x34, 0, {{0}}},  // 단
  {0xb2f9, 1, 0x39, 0, {{0}}},  // 당
  {0xb300, 1, 0x3a, 0, {{0}}},  // 대
  {0xb358, 1, 0x3e, 0, {{0}}},  // 던
  {0xb3c4, 1, 0x44, 0, {{0}}},  // 도
  {0xb3d9, 1, 0x46, 0, {{0}}},  // 동
  {0xb450, 1, 0x4d, 0, {{0}}},  // 두
  {0xb460, 2, 0x01, 0, {{0}}},  // 둠
  {0xb4a4, 2, 0x03, 0, {{0}}},  // 뒤
  {0xb4dc, 2, 0x04, 0, {{0}}},  // 드
  {0xb77c, 2, 0x1e, 0, {{0}}},  // 라
  {0xb784, 2, 0x20, 0, {{0}}},  // 랄
  {0xb791, 2, 0x25, 0, {{0}}},  // 랑
  {0xb85c, 2, 0x3b, 0, {{0}}},  // 로
  {0xb9ac, 2, 0x4c, 0, {{0}}},  // 리
  {0xb9c8, 3, 0x02, 0, {{0}}},  // 마
  {0xb9c9, 3, 0x03, 0, {{0}}},  // 막
  {0xb9de, 3, 0x0a, 0, {{0}}},  // 맞
  {0xba54, 3, 0x15, 0, {{0}}},  // 메
  {0xba74, 3, 0x17, 0, {{0}}},  // 면
  {0xbaa8, 3, 0x1a, 0, {{0}}},  // 모
  {0xbb3c, 3, 0x24, 0, {{0}}},  // 물
  {0xbc14, 3, 0x2c, 0, {{0}}},  // 바
  {0xbc29, 3, 0x34, 0, {{0}}},  // 방
  {0xbcd1, 3, 0x42, 0, {{0}}},  // 병
  {0xbcf4, 3, 0x43, 0, {{0}}},  // 보
  {0xbcf8, 3, 0x45, 0, {{0}}},  // 본
  {0xbd81, 3, 0x4c, 0, {{0}}},  // 북
  {0xbe44, 4, 0x02, 0, {{0}}},  // 비
  {0xc0ac, 4, 0x12, 0, {{0}}},  // 사
  {0xc0c1, 4, 0x16, 0, {{0}}},  // 상
  {0xc124, 4, 0x20, 0, {{0}}},  // 설
  {0xc131, 4, 0x22, 0, {{0}}},  // 성
  {0xc18d, 4, 0x2a, 0, {{0}}},  // 속
  {0xc218, 4, 0x30, 0, {{0}}},  // 수
  {0xc232, 4, 0x34, 0, {{0}}},  // 숲
  {0xc2a4, 4, 0x37, 0, {{0}}},  // 스
  {0xc2dc, 4, 0x3d, 0, {{0}}},  // 시
  {0xc2e0, 4, 0x3f, 0, {{0}}},  // 신
  {0xc545, 4, 0x4f, 0, {{0}}},  // 악
  {0xc5b4, 5, 0x0d, 0, {{0}}},  // 어
  {0xc5bc, 5, 0x10, 0, {{0}}},  // 얼
  {0xc640, 5, 0x26, 0, {{0}}},  // 와
  {0xc6d0, 5, 0x38, 0, {{0}}},  // 원
  {0xc704, 5, 0x3b, 0, {{0}}},  // 위
  {0xc744, 5, 0x3f, 0, {{0}}},  // 을
  {0xc74c, 5, 0x40, 0, {{0}}},  // 음
  {0xc758, 5, 0x42, 0, {{0}}},  // 의
  {0xc774, 5, 0x43, 0, {{0}}},  // 이
  {0xc790, 5, 0x4d, 0, {{0}}},  // 자
  {0xc791, 5, 0x4e, 0, {{0}}},  // 작
  {0xc7a5, 6, 0x03, 0, {{0}}},  // 장
  {0xc804, 6, 0x09, 0, {{0}}},  // 전
  {0xc815, 6, 0x0e, 0, {{0}}},  // 정
  {0xc900, 6, 0x1d, 0, {{0}}},  // 준
  {0xc9c0, 6, 0x24, 0, {{0}}},  // 지
  {0xcabd, 6, 0x30, 0, {{0}}},  // 쪽
  {0xcda4, 6, 0x46, 2, {{4, 0x32, 9, 10, 2, 0, 16}, {4, 0x32, 12, 12, 2, 0, 16}}},  // 춤 = 춘 + final ㅁ of 숨
  {0xce74, 6, 0x4d, 0, {{0}}},  // 카
  {0xd06c, 7, 0x0c, 0, {{0}}},  // 크
  {0xd0c8, 7, 0x13, 1, {{2, 0x20, 9, 9, 7, 0, 16}}},  // 탈 = 탄 + final ㄹ of 랄
  {0xd0d1, 7, 0x15, 0, {{0}}},  // 탑
  {0xd130, 7, 0x17, 0, {{0}}},  // 터
  {0xd14c, 7, 0x19, 0, {{0}}},  // 테
  {0xd2b8, 7, 0x21, 0, {{0}}},  // 트
  {0xd39c, 7, 0x1a, 1, {{7, 0x2f, 0, 0, 9, 0, 7}}},  // 펜 = 텐 with initial ㅍ of 편
  {0xd45c, 7, 0x33, 0, {{0}}},  // 표
  {0xd558, 7, 0x3c, 0, {{0}}},  // 하
  {0xd574, 7, 0x43, 0, {{0}}},  // 해
  {0xd5e4, 7, 0x4a, 0, {{0}}},  // 헤
  {0xd654, 8, 0x05, 0, {{0}}},  // 화
  {0xd655, 8, 0x06, 0, {{0}}},  // 확
};

typedef struct SSKoText { const char *en, *ko; } SSKoText;
static const SSKoText kSSKoText[] = {
  {"GEAR", "장비"},
  {"MAP", "지도"},
  {"ITEMS", "도구"},
  {"BOTTLES", "병"},
  {"PENDANTS", "펜던트"},
  {"CRYSTALS", "크리스탈"},
  {"DUNGEON", "던전"},
  {"SEWERS", "지하 수로"},
  {"HYRULE CASTLE", "하이랄 성"},
  {"EASTERN PALACE", "동쪽의 신전"},
  {"DESERT PALACE", "사막의 신전"},
  {"CASTLE TOWER", "성의 탑"},
  {"SWAMP PALACE", "물의 사당"},
  {"DARK PALACE", "어둠의 신전"},
  {"MISERY MIRE", "악마의 늪"},
  {"SKULL WOODS", "해골의 숲"},
  {"ICE PALACE", "얼음의 탑"},
  {"TOWER OF HERA", "헤라의 탑"},
  {"THIEVES TOWN", "방랑자의 마을"},
  {"TURTLE ROCK", "거북 바위"},
  {"GANONS TOWER", "가논의 탑"},
  {"SETTINGS", "설정"},
  {"SCREEN", "화면"},
  {"TURBO SPEED", "터보 속도"},
  {"RESTART", "다시 시작"},
  {"BACK", "뒤로"},
  {"DISPLAY MODE", "화면 모드"},
  {"EDGE MODE", "테두리 설정"},
  {"ZOOM", "화면 확대"},
  {"TOP HUD", "상단 HUD"},
  {"ORIGINAL", "원본"},
  {"STRETCH", "화면 맞춤"},
  {"WIDE", "와이드"},
  {"FIXED CAMERA", "카메라 고정"},
  {"STANDARD", "표준"},
};
