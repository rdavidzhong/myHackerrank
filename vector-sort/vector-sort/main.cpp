//
//  main.cpp
//  vector-sort
//
//  Created by David Zhong on 2015-12-31.
//  Copyright © 2015 David Zhong. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int size;
    cin >> size;
    vector<int> v(size);
    
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    
    for (vector<int>::const_iterator i = v.begin(); i != v.end(); ++i)
    {
        cout << *i << ' ';
    }
    
    return 0;
}

/*
 int element;
 
 v.push_back(element);
 i++;
 */