//
//  main.cpp
//  s-h-sample
//
//  Created by David Zhong on 2016-01-01.
//  Copyright © 2016 David Zhong. All rights reserved.
//

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <cstdlib>
#include <iostream>

using namespace std;

// Right answer
void StairCase(int n)
{
    int w = 1;
   // int k;
//    for (int i = 0; i <= n; i++)
//    {
        while (0 < n)
        {
       // k = n-1; // n = 6, k = 5 spaces
            for (int j = n-2; j >= 0;j--)
            {
                //cout << " ";
                printf(" ");
            }
            for (int m = 0; m < w; m++)
            {
                //cout << "#";
                printf("#");
            }
            cout << endl;
            n--;
            w++;
        }
    //}

}

int main()
{
    int _n;
    scanf("%d", &_n);
    StairCase(_n);
    return 0;
    
}

// Question 1 - sum of array

//    int sum=0;
//
//    int arrayname[] = {2, 3, 3};
//
//    for (int a=0; a<3; a++)
//    {
//        sum+=arrayname[a];
//    }
//
//    cout << sum << endl;
//
//    return 0;

// Question 2 - Staircase (can't use cout)

/*
 #include <math.h>
 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
 #include <assert.h>
 #include <limits.h>
 #include <stdbool.h>
 #include <cstdlib>
 #include <iostream>
 
 using namespace std;
 
 void StairCase(int n)
 {
 int sp,w = 1,k;
 for (int i = 0; i < n; i++)
 {
 
 sp = k;
 for (int j = 0; k < sp; j++)
 {
 cout << " ";
 }
 for (int m = 0; m < w; m++)
 {
 cout << "#";
 }
 cout << endl;
 k--;
 w++;
 }
 
 // Answer reversed
 // can't use cout in the test
 }
 
 int main()
 {
 int _n;
 scanf("%d", &_n);
 StairCase(_n);
 return 0;
 
 }
 */

// Question 3 -

// http://bigocheatsheet.com/
/*
 
 
 which sorting algorithms best asymptotic runtime complexity
 
 bubble heap selection insertion
 */