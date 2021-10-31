#pragma once
typedef unsigned long long int ll;
#define NAME "Carw "
#define VERSION "1.0"
#define TOTAL_SQUARS 120
#define MAXGAMEMOVES 2048// Don't know how just a data from google
enum  {
EMPTY, WP,WN,WB,WR,WQ ,WK,BP,BN,BB,BR,BQ,BK
};
enum {
    F_A,F_B,F_C,F_D,F_E,F_F,F_G,F_H,F_NONE
};
enum  {
    R_1,R_2,R_3,R_4,R_5,R_6,R_7,R_8,R_NONE
};
enum  {
    WHITE ,BLACK,BOTH
};
enum   BOARD_LAYOUT {
    A1=21,B1,C1,D1,E1,F1,G1,H1,
    A2=31,B2,C2,D2,E2,F2,G2,H2,
    A3=41,B3,C3,D3,E3,F3,G3,H3,
    A4=51,B4,C4,D4,E4,F4,G4,H4,
    A5=61,B5,C5,D5,E5,F5,G5,H5,
    A6=71,B6,C6,D6,E6,F6,G6,H6,
    A7=81,B7,C7,D7,E7,F7,G7,H7,
    A8=91,B8,C8,D8,E8,F8,G8,H8,NO_SQ
};
enum CHEK {
    FALSE,TRUE
};
enum CASTLE_LENGTH{
    WHITE_KING=1,WHITE_QUEEN=2,BLACK_KING=4,BLACK_QUEEN=8
};
typedef struct HISTORY {
    int move;
    int castlePerm;
     int FiftyMoves;
      int enPass;
      ll posKey;


};
typedef struct BOARD
{
    /* data */
    int pieces[TOTAL_SQUARS];
    ll pawns[3];
    int kingPos[3];
    int side;
    int enPass;
    int FiftyMoves;
    int ply;
    int hisPlay;
    ll posKey;
    int pieceNum[13];
    int pieceBig[3];
    int pieceMajor[3];
    int pieceMinor[3];
    int castlePerm;
    HISTORY undo [MAXGAMEMOVES];


};
