//
//  main.cpp
//  Conditional Statements
//
//  Created by David Zhong on 2015-12-28.
//  Copyright © 2015 David Zhong. All rights reserved.
//

/*
 Conditional Statements
 by abhiranjan
 Problem
 Submissions
 Leaderboard
 Discussions
 Problem Statement
 
 if and else are two of the most heavily used conditionals in C/C++. They are used to execute zero or one statement among many statements.
 
 They are be used in the following three ways.
 
 if: It is used to execute a statement, given the condition is true.
 
 if(condition) {
 ...
 }
 if - else: It is used to execute exactly one of the two statements.
 
 if(first condition) {
 ...
 }
 else {
 ...
 }
 if - else if - else: It is used to execute one of the multiple statements.
 
 if(first condition) {
 ...
 }
 else if(second condition) {
 ...
 }
 .
 .
 .
 else if((n-1)'th condition) {
 
 }
 else {
 ...
 }
 You are given a positive integer, n,:
 
 If 1≤n≤9, then print the English representation of it. That is "one" for 1, "two" for 2, and so on.
 Otherwise print "Greater than 9" (without quotes).
 Input Format
 
 Input will contain only one integer, n.
 
 Output Format
 
 Print the output as described above.
 
 Sample Input
 
 5
 Sample Output
 
 five
 Sample Input #01
 
 8
 Sample Output #01
 
 eight
 Sample Input #02
 
 44
 Sample Output #02
 
 Greater than 9
 */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
  
    int a;
    scanf("%d", &a);
    if( a == 1)
    {
        cout << "one" << endl;
    }
    else if ( a == 2)
    {
        cout << "two" << endl;
    }
    else if ( a == 3)
    {
        cout << "three" << endl;
    }
    else if ( a == 4)
    {
        cout << "four" << endl;
    }
    else if ( a == 5)
    {
        cout << "five" << endl;
    }
    else if ( a == 6)
    {
        cout << "six" << endl;
    }
    else if ( a == 7)
    {
        cout << "seven" << endl;
    }
    else if ( a == 8)
    {
        cout << "eight" << endl;
    }
    else if ( a == 9)
    {
        cout << "nine" << endl;
    }
    else
    {
        cout << "Greater than 9" << endl;
    }
    
    return 0;
}
