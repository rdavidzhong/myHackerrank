//
//  main.cpp
//  Strings
//
//  Created by David Zhong on 2015-12-29.
//  Copyright © 2015 David Zhong. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // Complete the program
    
//    string a = "abcd";
//    string b = "ef";
    
    string a ;
    string b ;
  
    cin >> a;
    cin >> b;
    cout << a.size() << " " << b.size() << endl;
    cout << a + b << endl;
    swap(a[0],b[0]);
    cout << a << " " << b << endl;
    
    return 0;
}

/*
 // Weird
 
 // Complete the program
 
 //    string a = "abcd";
 //    string b = "ef";
 
 string a ;
 string b ;
 char* c = &a[0];
 
 cin >> a;
 cin >> b;
 cout << a.size() << " " << b.size() << endl;
 cout << a + b << endl;
 
 a[0] = b[0];
 // b[0] = a[0];
 cout << a << " " << c << endl;
 
 
 return 0;
 
 */