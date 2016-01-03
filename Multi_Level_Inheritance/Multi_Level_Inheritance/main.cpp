//
//  main.cpp
//  Multi_Level_Inheritance
//
//  Created by David Zhong on 2016-01-03.
//  Copyright © 2016 David Zhong. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Triangle{
public:
    void triangle(){
        cout<<"I am a triangle\n";
    }
};

class Isosceles : public Triangle{
public:
    void isosceles(){
        cout<<"I am an isosceles triangle\n";
    }
    
};

class Equilateral : public Isosceles{
public:
    void equilateral(){
        cout<<"I am an equilateral triangle\n";
    }
};

//Write your code here.
int main(){
    
    Equilateral eqr;
    eqr.equilateral();
    eqr.isosceles();
    eqr.triangle();
    return 0;
}

