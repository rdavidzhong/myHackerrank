//
//  main.cpp
//  2D-Array-DS
//
//  Created by David Zhong on 2016-01-03.
//  Copyright © 2016 David Zhong. All rights reserved.
//

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
        for(int arr_j = 0;arr_j < 6;arr_j++){
            cin >> arr[arr_i][arr_j];
        }
    }
    
    // Initialize 2D dynamic array
    // http://stackoverflow.com/questions/936687/how-do-i-declare-a-2d-array-in-c-using-new
    int rowCount = 6, colCount = 6;
                                                        //  int *m = new int[H][W];
    int ** m = new int* [rowCount];
    for (int i = 0; i < rowCount; ++i)
    {
        m[i] = new int[colCount];
    }
    
    
  
    int sum = 0;
 //   int imax = numeric_limits<int>::max();
    
    for(int h=0;h<rowCount-2;h++)
    {
        for(int w=0;w<colCount-2;w++)
        {
             sum =
                       m[h][w]+
                       m[h][w+1]+
                       m[h][w+2]+
                       m[h+1][w+1]+
                       m[h+2][w]+
                       m[h+2][w+1]+
                       m[h+2][w+2]
                       
                       ;
            
        }
    }
    cout << sum << endl;

    return 0;
}


