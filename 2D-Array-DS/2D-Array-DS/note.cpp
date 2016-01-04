//
//  note.cpp
//  2D-Array-DS
//
//  Created by David Zhong on 2016-01-03.
//  Copyright © 2016 David Zhong. All rights reserved.
//

int r=Integer.MIN_VALUE;
for(int h=0;h<H-2;h++)
{
    for(int w=0;w<W-2;w++)
    {
        r=Math.max(
                   r,m[h][w]+
                   m[h][w+1]+
                   m[h][w+2]+
                   m[h+1][w+1]+
                   m[h+2][w]+
                   m[h+2][w+1]+
                   m[h+2][w+2]
                   
                   );
    }
}