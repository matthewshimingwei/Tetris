//
// Created by Ming Shi on 22/10/2019.
//

#include "evaluate.h"
int sum_n[] ={
        0,1,3,6,10,15,21,28,36,45,55,66,78,91,105,120,136,
        153,171,190,210
};
bool isFullRowStatus(RUSSIA_GAME *game,int row)
{
    for(int i = 0;i<GAME_COLUMN;i++)
    {
        if(game->board[row+1][i+1] ==0)
        {
            return false;
        }
    }
    return true;
}

int GetLandingHeight(RUSSIA_GAME *game,B_SHAPE *bs,int row,int col)
{
    return (GAME_ROW-row);

}

int GetErodePieceCellMetric(RUSSIA_GAME *game,B_SHAPE *bs,int row,int col)
{
    int erodedRow = 0;
    int erodeShape= 0;
    int i = game->top_row;
    while(i<GAME_ROW)
    {
        if(isFullRowStatus(game,i))
        {
            erodedRow++;
            if((i>=row)&&(i<=(row+bs->height)))
            {
                int sline = i -row;
                for(int j = 0;j<bs->width;j++)
                {
                    if(bs->shape[sline][j] != 0)
                    {
                        erodeShape++;
                    }
                }
            }
        }
        i++;
    }
    return (erodedRow*erodeShape);
}

int GetBoardRowTransitions(RUSSIA_GAME *game,B_SHAPE *bs,int row,int col)
{
    int transistions = 0;
    for(int i =game->top_row;i<GAME_ROW;i++)
    {
        for(int j = 0;j<(BOARD_COLUMN-1);j++)
        {
            if((game->board[i+1][j]!=0)&&(game->board[i+1][j+1]==0))
            {
                transistions++;
            }
            if((game->board[i+1][j]==0)&&(game->board[i+1][j+1]!=0))
            {
                transistions++;
            }
        }
    }
}

int GetBoardColTransitions(RUSSIA_GAME *game,B_SHAPE *bs,int row,int col)
{
    int transistions = 0;
    for(int j = 0;j<GAME_COLUMN;j++)
    {
        for(int i = game->top_row;i<GAME_ROW;i++)
        {
            if((game->board[i+1][j+1]!=0)&&(game->board[i+2][j+1]==0))
            {
                transistions++;
            }
            if((game->board[i+1][j+1]==0)&&(game->board[i+2][j+1]!=0))
            {
                transistions++;
            }
        }
    }
    return transistions;
}

int GetBoardBuriedHoles(RUSSIA_GAME *game,B_SHAPE *bs,int row,int col)
{
    int holes = 0;
    for(int j = 0;j<GAME_COLUMN;j++)
    {
        int i = game->top_row;
        while((game->board[i+1][j+1]==0)&&(i<GAME_ROW))
            i++;
        while(i<GAME_ROW)
        {
            if(game->board[i+1][j+1]==0)
            {
                holes++;
            }
            i++;
        }
    }
    return holes;
}


int GetBoardWells(RUSSIA_GAME *game,B_SHAPE *bs,int row,int col)
{
    int wells = 0;
    int sum = 0;
    for(int j = 0;j<GAME_ROW;j++)
    {
        for(int i = game->top_row;i<=GAME_ROW;i++)
        {
            if(game->board[i+1][j+1]==0)
            {
                if((game->board[i+1][j+1]!=0)&&(game->board[i+1][j+2]!=0))
                {
                    wells++;
                }
            }
            else
            {
                sum+=sum_n[wells];
                wells =0;
            }
        }
    }
    return sum;
}

int EvaluateFunction(RUSSIA_GAME *game,B_SHAPE *bs,int row,int col)
{
    int evalue = 0;
    int lh = GetLandingHeight(game,bs,row,col);
    int epcm  = GetErodePieceCellMetric(game,bs,row,col);
    int brt = GetBoardRowTransitions(game,bs,row,col);
    int bct = GetBoardColTransitions(game,bs,row,col);
    int bbh = GetBoardBuriedHoles(game,bs,row,col);
    int bw = GetBoardWells(game,bs,row,col);

    evalue = (-1)*lh +epcm- brt-bct -(4*bbh) -bw;
    return evalue;
}

int PrioritySelection(RUSSIA_GAME *game,int r_index,int row,int col)
{
    int priority = 0;
    if(col <(GAME_ROW/2))
    {
        priority = 100*((GAME_COLUMN/2-1)-col)+10+r_index;
    }
    else
    {
        priority = 100*(col-(GAME_COLUMN/2))+r_index;
    }

}


