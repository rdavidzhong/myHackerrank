/*
 Arrays- DS
 by saikiran9194
 Problem
 Submissions
 Leaderboard
 Discussions
 Problem Statement
 
 An array is a series of elements of the same type placed in contiguous memory locations that can be individually referenced by adding an index to a unique identifier.
 
 You'll be given an array of N integers, and you have to print the integers in reverse order.
 
 Note: If you have already solved the problem "Arrays Introduction" in the Introduction chapter of the C++ domain, you may skip this challenge.
 
 Input Format
 
 The first line of input contains N, the number of integers. The next line contains N integers separated by a space.
 
 Constraints
 
 1<=N<=1000
 1<=Ai<=10000, where Ai is the ith integer in the array.
 
 Output Format
 
 Print the N integers of the array in the reverse order on a single line separated by single spaces.
 
 Sample Input
 
 4
 1 4 3 2
 Sample Output
 
 2 3 4 1
 */

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
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
        cin >> arr[arr_i];
    }
    for(int arr_i = n-1; arr_i >= 0;--arr_i){
        cout << arr[arr_i] << " ";
    }
    
    return 0;
}
