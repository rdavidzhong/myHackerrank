//
//  main.cpp
//  class-templates
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
#include <string>
using namespace std;

/*Write the class AddElements here*/
template <class T>
class AddElements
{
    T element;
    
public:
    AddElements(const T & element):
       element {element}
    { }
    
    T add(const T &other)
    {
        return element + other;
    }
    
    T concatenate(const T &other)
    {
        return element + other;
    }
};


int main () {
    int n,i;
    cin >> n;
    for(i=0;i<n;i++) {
        string type;
        cin >> type;
        if(type=="float") {
            double element1,element2;
            cin >> element1 >> element2;
            AddElements<double> myfloat (element1);
            cout << myfloat.add(element2) << endl;
        }
        else if(type == "int") {
            int element1, element2;
            cin >> element1 >> element2;
            AddElements<int> myint (element1);
            cout << myint.add(element2) << endl;
        }
        else if(type == "string") {
            string element1, element2;
            cin >> element1 >> element2;
            AddElements<string> mystring (element1);
            cout << mystring.concatenate(element2) << endl;
        }
    }
    return 0;
}