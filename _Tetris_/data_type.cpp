//
// Created by Ming Shi on 22/10/2019.
//

#include "data_type.h"

char shape_char[] = {' ', 'O', 'Z', 'L', 'J', 'I', 'O', 'T', 'N' };

R_SHAPE g_shapes[] =
        {
                //S_S
                {
                        {
                                {
                                        0,
                                        {
                                                {0,1,1,0},
                                                {1,1,0,0},
                                                {0,0,0,0},
                                                {0,0,0,0}
                                        },
                                        3,2
                                },
                                {
                                        1,
                                        {
                                                {1,0,0,0},
                                                {1,1,0,0},
                                                {0,1,0,0},
                                                {0,0,0,0}
                                        },
                                        2,3
                                }
                        },
                        2
                },
                //S_Z
                {
                        {
                                {
                                        0,
                                        {
                                                {1,1,0,0},
                                                {0,1,1,0},
                                                {0,0,0,0},
                                                {0,0,0,0}
                                        },
                                        3,2
                                },
                                {
                                        1,
                                        {
                                                {0,1,0,0},
                                                {1,1,0,0},
                                                {1,0,0,0},
                                                {0,0,0,0}
                                        },
                                        2,3
                                }
                        },
                        2
                },
                //S_L
                {
                        {
                                {
                                        0,
                                        {
                                                {1,0,0,0},
                                                {1,0,0,0},
                                                {1,1,0,0},
                                                {0,0,0,0}
                                        },
                                        2,3
                                },
                                {
                                        1,
                                        {
                                                {1,1,1,0},
                                                {1,0,0,0},
                                                {0,0,0,0},
                                                {0,0,0,0}
                                        },
                                        3,2
                                },
                                {
                                        2,
                                        {
                                                {1,1,0,0},
                                                {0,1,0,0},
                                                {0,1,0,0},
                                                {0,0,0,0}
                                        },
                                        2,3
                                },
                                {
                                        3,
                                        {
                                                {0,0,1,0},
                                                {1,1,1,0},
                                                {0,0,0,0},
                                                {0,0,0,0}
                                        },
                                        3,2
                                }
                        },
                        4
                },
                //S_J
                {
                        {
                                {
                                        0,
                                        {
                                                {0,1,0,0},
                                                {0,1,0,0},
                                                {1,1,0,0},
                                                {0,0,0,0}
                                        },
                                        2,3
                                },
                                {
                                        1,
                                        {
                                                {1,0,0,0},
                                                {1,1,1,0},
                                                {0,0,0,0},
                                                {0,0,0,0}
                                        },
                                        3,2
                                },
                                {
                                        2,
                                        {
                                                {1,1,0,0},
                                                {1,0,0,0},
                                                {1,0,0,0},
                                                {0,0,0,0}
                                        },
                                        2,3
                                },
                                {
                                        3,
                                        {
                                                {1,1,1,0},
                                                {0,0,1,0},
                                                {0,0,0,0},
                                                {0,0,0,0}
                                        },
                                        3,2
                                }
                        },
                        4
                },
                //S_I
                {
                        {
                                {
                0,
                                {
                                        {1,1,1,1},
                                        {0,0,0,0},
                                        {0,0,0,0},
                                        {0,0,0,0}
                                },
                                4,1
                        },
                        {
                                1,
                                {
                                        {1,0,0,0},
                                        {1,0,0,0},
                                        {1,0,0,0},
                                        {1,0,0,0}
                                },
                                1,4
                        }
                },
                2
        },
//S_O
{
{
{
0,
{
{1,1,0,0},
{1,1,0,0},
{0,0,0,0},
{0,0,0,0}
},
2,2
}
},
1
},
//S_T
{
{
{
0,
{
{0,1,0,0},
{1,1,1,0},
{0,0,0,0},
{0,0,0,0}
},
3,2
},
{
1,
{
{1,0,0,0},
{1,1,0,0},
{1,0,0,0},
{0,0,0,0}
},
2,3
},
{
                                        2,
                                        {
                                                {1,1,1,0},
                                                {0,1,0,0},
                                                {0,0,0,0},
                                                {0,0,0,0}
                                        },
                                        3,2
                                },
                                {
                                        3,
                                        {
                                                {0,1,0,0},
                                                {1,1,0,0},
                                                {0,1,0,0},
                                                {0,0,0,0}
                                        },
                                        2,3
                                }
                        },
                        4
                },
        };