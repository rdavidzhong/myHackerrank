//
//  main.cpp
//  classes-objects
//
//  Created by David Zhong on 2015-12-30.
//  Copyright © 2015 David Zhong. All rights reserved.
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student{
    
    vector<int> v;
public:
    void Input()
    {
        for (int i = 0; i < 5; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
    }
    
    int CalculateTotalScore()
    {
        int result = 0;
        for (int i = 0; i < v.size(); i++)
        {
            result += v[i];
        }
        return result;
    }
    
};

int main() {
    
    
    int n ;
    cin>>n;
    
    // Error in xcode compiler - Can't set variable length with variable
   // Student s[n];
    /*
     
     http://stackoverflow.com/questions/10045266/cant-set-variable-length-with-variable
     Solution is using dynamic array:
     
     int arraySize = 10;
     int * myArray = new int[arraySize];
     */
    
    Student * s = new Student[n];
    for(int i=0;i<n;i++)
        s[i].Input();
    int count=0;
    int krish_score=s[0].CalculateTotalScore();
    for(int i=1;i<n;i++)
    {
        int total=s[i].CalculateTotalScore();
        if(total>krish_score)
            count++;
    }
    cout<<count;
    return 0;
}
