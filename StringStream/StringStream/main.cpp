//
//  main.cpp
//  StringStream
//
//  Created by David Zhong on 2015-12-30.
//  Copyright © 2015 David Zhong. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector<int> parseInts(string str) {
    
    stringstream ss(str);
    vector<int> result;
    char ch;
    int tmp;
    
    while (ss >> tmp) {
        result.push_back(tmp);
        ss >> ch;
    }
    
    return result;
}

int main() {
    
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    
    for (int i = 0; i < integers.size(); i++) {
        cout << integers[i] << endl;
    }
    
    return 0;
    
    /*
    stringstream ss("23,4,56");
    char ch;
    int a, b, c;
    ss >> a >> ch >> b >> ch >> c;  // a = 23, b = 4, c = 56
    
    cout << a << ch << b << ch << c << endl;
     */
}