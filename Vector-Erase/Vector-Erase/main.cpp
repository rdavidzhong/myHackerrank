//
//  main.cpp
//  Vector-Erase
//
//  Created by David Zhong on 2015-12-31.
//  Copyright © 2015 David Zhong. All rights reserved.
//

/*
 Input Format
 
 The first line of the input contains an integer N.
 
 The next line contains N space separated integers.
 
 The third line contains a single integer x,denoting the position of an element that should be removed from the vector.
 
 The fourth line contains two integers a and b denoting the range that should be erased from the vector inclusive of a and exclusive of b.

 Constraints
 1<=N<=105
 1<=x<=N
 1<=a<=b<=N−1
 
 Output Format
 
 Print the size of the vector in the first line and the elements of the vector after the two erase operations in the second line separated by space.
 
 Sample Input
 
 6
 1 4 6 2 8 9
 2
 2 4
 
 Sample Output
 
 3
 1 8 9
 */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   
    /*
     
     Sample Input
     
     6
     1 4 6 2 8 9
     2
     2 4
     
     */
    int size;
    cin >> size;
    vector<int> v(size);
    
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }
    
    int position;
    cin >> position;
    
    int rangeA, rangeB;
    cin >> rangeA >> rangeB;
    
    // Function doing the job
    v.erase(v.begin()+position-1);
    v.erase(v.begin()+rangeA-1, v.begin()+rangeB-1);
    
    for (int j = 0; j < size; j++)
    {
        cin >> v[j];
    }
    
    /*
     Sample Output
     
     3
     1 8 9
     */
    // Printing output
    cout << v.size() << endl;
    
    for (vector<int>::const_iterator i = v.begin(); i != v.end(); ++i)
    {
        cout << *i << ' ';
    }
    
    return 0;
}


