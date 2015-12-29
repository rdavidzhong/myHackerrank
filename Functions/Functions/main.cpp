//
//  main.cpp
//  Functions
//
//  Created by David Zhong on 2015-12-28.
//  Copyright © 2015 David Zhong. All rights reserved.
//

/*
 Functions
 by abhiranjan
 Problem
 Submissions
 Leaderboard
 Discussions
 Problem Statement
 
 Functions are a bunch of statements glued together. A function is provided with zero or more arguments, and it executes the statements on it. Based on the return type, it either returns nothing (void) or something.
 
 A sample syntax for a function is
 
 return_type function_name(arg_type_1 arg_1, arg_type_2 arg_2, ...) {
 ...
 ...
 ...
 [if return_type is non void]
 return something of type `return_type`;
 }
 For example, a function to read four variables and return the sum of them can be written as
 
 int sum_of_four(int a, int b, int c, int d) {
 int sum = 0;
 sum += a;
 sum += b;
 sum += c;
 sum += d
 return sum;
 }
 You have to write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.
 
 Input Format
 
 Input will contain four integers - a,b,c,d , one in each line.
 
 Output Format
 
 Print the greatest of the four integers.
 PS: I/O will be automatically handled.
 
 Sample Input
 
 3
 4
 6
 5
 Sample Output
 
 6
 
 */
#include <iostream>
#include <cstdio>

using namespace std;

/*
 Add `int max_of_four(int a, int b, int c, int d)` here.
 */

// It's easier to use max

/*

 // max example
 #include <iostream>     // std::cout
 #include <algorithm>    // std::max
 
 int main () {
 std::cout << "max(1,2)==" << std::max(1,2) << '\n';
 std::cout << "max(2,1)==" << std::max(2,1) << '\n';
 std::cout << "max('a','z')==" << std::max('a','z') << '\n';
 std::cout << "max(3.14,2.73)==" << std::max(3.14,2.73) << '\n';
 return 0;
 }
 Edit & Run
 
 
 Output:
 max(1,2)==2
 max(2,1)==2
 max('a','z')==z
 max(3.14,2.73)==3.14

 */

int max_of_four(int a, int b, int c, int d)
{
    int max1;
    int max2;
    
    if ( a > b)
    {
        max1 = a;
    }
    else
    {
        max1 = b;
    }
    
    if ( c > d)
    {
        max2 = c;
    }
    else
    {
        max2 = d;
    }
    
    if (max1 > max2)
    {
        if ( a > b)
        {
            return a;
        }
        else
        {
            return b;
        }
    }
    else
    {
        if ( c > d)
        {
            return c;
        }
        else
        {
            return d;
        }
    }
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
