//
// Created by Ming Shi on 22/10/2019.
//

#ifndef __TYPE_DEF_H__
#define __TYPE_DEF_H__
typedef enum tagShapeType
{
    S_NULL = 0,
    S_S,
    S_Z,
    S_L,
    S_J,
    S_I,
    S_O,
    S_B //special type of border

}SHAPE_TYPE;

const int SHAPE_COUNT = 7;
const int BOARD_ROW = 12;
const int BOARD_COLUMN = 12;
const int GAME_ROW = 20;
const int GAME_COLUMN = 20;
const int SHAPE_BOX = 4;
const int MAX_SHAPE_ROW  = 4;
const int LINE_SCORE = 100;


//showing area
typedef struct tagRussiaGame
{
    int board[BOARD_ROW][BOARD_COLUMN];
    int top_row; // for top row is to elimiate some enumeration
    int score;
    int lines;
}RUSSIA_GAME;


typedef  struct  tagShape
{
    int r_index ;
    int shape[SHAPE_BOX][SHAPE_BOX];
    int width;
    int height;

}B_SHAPE;

typedef struct tagRShape
{
    B_SHAPE shape_r[MAX_SHAPE_ROW];
    int r_count ;
}R_SHAPE;

typedef  struct  tageEvaluateResult
{
    int r_index;
    int row,col;
    int value;
    int pre;
}EVA_RESULT;
#endif //_TETRIS__TYPE_DEF_H
