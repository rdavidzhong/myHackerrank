//
//  main.cpp
//  Maps-STL
//
//  Created by David Zhong on 2016-01-02.
//  Copyright © 2016 David Zhong. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, Type, X;
    map<string, int>m;
    string s;
    for(scanf("%d", &N); N--;)
    {
        cin >> Type >> s;
        if(Type == 1)
        {
            cin >> X;
            m[s] += X;
        }
        // Same as
        /*
         if(T==1)cin>>X,m[s]+=X;
         */
        if(Type == 2)
        {
            m.erase(s);
        }
        if(Type == 3)
        {
            cout << m[s] << endl;
        }

    }
    
    return 0;
}
