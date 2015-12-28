//
//  main.cpp
//  Input and Output
//
//  Created by David Zhong on 2015-12-27.
//  Copyright © 2015 David Zhong. All rights reserved.
//

/*
 Input and Output
 by saikiran9194
 Problem
 Submissions
 Leaderboard
 Discussions
 Problem Statement
 
 For any written program, a basic requirement is to take the input and print the expected output.
 
 In C++, you can take the input using cin and print the output using cout. Here, you can use cin and cout, unlike C where you need the format specifier in printf and scanf.
 
 Taking input:
 
 If you want to input a number: cin>>n ,  where n is the number.
 If you want to input a number and a string: cin>>n>>s, where s is the string.
 Printing output:
 
 If you want to output a single number: cout<<n
 If you want to output a number and a string separated by a new line: cout<<n<<endl<<s
 (where endl moves the printer to the new line and then the string is printed.)
 In this exercise, take three numbers as inputs and print the sum of those three numbers.
 
 Input Format
 
 The first line of input contains three integers: A, B and C.
 
 1≤A,B,C≤1000
 Output Format
 
 On a single line, print the sum of the three numbers.
 
 Sample Input
 
 1 2 7
 Sample Output
 
 10
 Explanation
 
 The sum of the three numbers: 1+2+7=10.
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(int argc, const char * argv[]) {
    
    // Pass Hackerrank without my own test case here
    int a, b ,c;
    int sum = 0;
    
    cin >> a;
    cin >> b;
    cin >> c;
    sum = a+b+c;
    cout << sum << endl;
    
    return 0;
    
}
