//
//  main.cpp
//  Basic Data Types
//
//  Created by David Zhong on 2015-12-27.
//  Copyright © 2015 David Zhong. All rights reserved.
//

/*
 Basic Data Types
 by abhiranjan
 Problem
 Submissions
 Leaderboard
 Discussions
 Problem Statement
 
 C++ has the following data types. Below we give you their format specifier, and their most common bit width:
 
 Int ("%d"): 32 Bit integer
 Long ("%ld"): 32 bit integer (same as Int for modern systems)
 Long Long ("%lld"): 64 bit integer
 Char ("%c"): Character type
 Float ("%f"): 32 bit real value
 Double ("%lf"): 64 bit real value
 Reading
 In order to read a data type, you need the following syntax:
 
 scanf("`format_specifier`", &val)
 For example, in order to read a character and then a double:
 
 char ch;
 double d;
 scanf("%c %lf", &ch, &d);
 For the moment, we can ignore the spacing between format specifiers.
 
 Printing
 In order to print a data type, you need the following syntax:
 
 printf("`format_specifier`", val)
 For example, in order to print a character and then a double:
 
 char ch = 'd';
 double d = 234.432;
 printf("%c %lf", ch, d);
 Note: You can always use cin and cout instead of scanf and printf. However, if you are taking a million numbers as input and printing a million lines, it is faster to use scanf and printf.
 
 Input Format
 
 Input will consist of an int, long, long long, char, float and double, each separated by a space.
 
 Output Format
 
 Print each of the elements on a new line in the same order.
 
 Sample Input
 
 3 444 12345678912345 a 334.23 14049.30493
 Sample Output
 
 3
 444
 12345678912345
 a
 334.23
 14049.30493

 */
#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int a=3 ;
    int b=444;
    long long c=12345678912345;
    char d='a';
    double e= 334.23;
    double f=14049.30493;

//    scanf("%d", &a);
//    scanf("%d", &b);
//    scanf("%lld", &c);
//    // Be careful with " %c" - require a space
//    scanf(" %c", &d);
//    scanf("%lf", &e);
//    scanf("%lf", &f);
    
    
    
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%lld\n",c);
    //
    printf("%c\n",d);
    printf("%.2lf\n",e);
    printf("%.5lf\n",f);
    return 0;
    
    return 0;
}
