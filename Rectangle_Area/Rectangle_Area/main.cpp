//
//  main.cpp
//  Rectangle_Area
//
//  Created by David Zhong on 2016-01-03.
//  Copyright © 2016 David Zhong. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Rectangle{
public:
    int length;
    int width;
    void Input()
    {
    //length = 0;
        cin >> length;
        cin >> width;
    }
    
    void Display()
    {
        cout << length << " ";
        cout << width << endl;
    }
    

};
class RectangleArea : public Rectangle{
public:
    int area;

    void Display(){
        area = length * width;
        cout << area << endl;
    }
//    int Display(){
//        area = length * width;
//        return area;
//    }
    
};

int main() {
    RectangleArea r_area;
    r_area.Input();
    Rectangle *r;
    r=&r_area;
    r->Display();
    r_area.Display();
    return 0;
}
