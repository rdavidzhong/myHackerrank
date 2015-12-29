//
//  main.cpp
//  For Loop
//
//  Created by David Zhong on 2015-12-28.
//  Copyright © 2015 David Zhong. All rights reserved.
//

/*
 For Loop
 by abhiranjan
 Problem
 Submissions
 Leaderboard
 Discussions
 Problem Statement
 
 A for loop is a programming language statement which allows code to be repeatedly executed.
 
 The syntax for this is
 
 for ( <expression_1> ; <expression_2> ; <expression_3> )
 <statement>
 expression_1 is used for intializing variables which are generally used for controlling terminating flag for the loop.
 expression_2 is used to check for the terminating condition. If this evaluates to false, then the loop is terminated.
 expression_3 is generally used to update the flags/variables.
 A sample loop will be
 
 for(int i = 0; i < 10; i++) {
 ...
 }
 Input Format
 
 You will be given two positive integers, a and b (a≤b), separated by a newline.
 
 Output Format
 
 For each integer n∈[a,b] (so all numbers in that range):
 
 If 1≤n≤9, then print the English representation of it. That is "one" for 1, "two" for 2, and so on.
 Else if n>9 and it is even, then print "even".
 Else if n>9 and it is odd, then print "odd".
 Note: [a,b] represents the interval, i.e., [a,b]={x∈ℤ| a≤x≤b}={a, a+1,…,b}
 
 Sample Input
 
 8
 11
 Sample Output
 
 eight
 nine
 even
 odd
 
 
 */

#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;


int main(int argc, const char * argv[]) {




}

// Solution
// https://github.com/cielavenir/procon/blob/master/hackerrank/c-tutorial-for-loop.cpp

/*
 
vector<string>v={"zero","one","two","three","four","five","six","seven","eight","nine"};
vector<string>e={"even","odd"};
int a,b;
cin>>a>>b;
for(;a<=b;a++)cout<<(a<10?v[a]:e[a%2])<<endl;

 
 */


// Fail case 2
/*
 
 #include <iostream>
 #include <cstdio>
 
 using namespace std;
 
 
 int main(int argc, const char * argv[]) {
 
 int a;
 int b;
 
 scanf("%d", &a);
 scanf("%d", &b);
 
 // a = 8, b = 11
 // a < n < 11
 
 if( a == 1)
 {
 cout << "one" << endl;
 cout << "two" << endl;
 cout << "three" << endl;
 cout << "four" << endl;
 cout << "five" << endl;
 cout << "six" << endl;
 cout << "seven" << endl;
 cout << "eight" << endl;
 cout << "nine" << endl;
 }
 else if ( a == 2)
 {
 cout << "two" << endl;
 cout << "three" << endl;
 cout << "four" << endl;
 cout << "five" << endl;
 cout << "six" << endl;
 cout << "seven" << endl;
 cout << "eight" << endl;
 cout << "nine" << endl;
 }
 else if ( a == 3)
 {
 cout << "three" << endl;
 cout << "four" << endl;
 cout << "five" << endl;
 cout << "six" << endl;
 cout << "seven" << endl;
 cout << "eight" << endl;
 cout << "nine" << endl;
 }
 else if ( a == 4)
 {
 cout << "four" << endl;
 cout << "five" << endl;
 cout << "six" << endl;
 cout << "seven" << endl;
 cout << "eight" << endl;
 cout << "nine" << endl;
 }
 else if ( a == 5)
 {
 cout << "five" << endl;
 cout << "six" << endl;
 cout << "seven" << endl;
 cout << "eight" << endl;
 cout << "nine" << endl;
 }
 else if ( a == 6)
 {
 cout << "six" << endl;
 cout << "seven" << endl;
 cout << "eight" << endl;
 cout << "nine" << endl;
 }
 else if ( a == 7)
 {
 cout << "seven" << endl;
 cout << "eight" << endl;
 cout << "nine" << endl;
 }
 else if ( a == 8)
 {
 cout << "eight" << endl;
 cout << "nine" << endl;
 }
 else if ( a == 9)
 {
 cout << "nine" << endl;
 }
 
 
 for (int i = 10; i <= b; i++)
 {
 if ( i % 2 == 0)
 {
 cout << "even" << endl;
 }
 else
 {
 cout << "odd" << endl;
 }
 
 }
 
 
 return 0;
 }
 
 */