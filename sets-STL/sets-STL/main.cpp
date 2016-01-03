//
//  main.cpp
//  sets-STL
//
//  Created by David Zhong on 2016-01-02.
//  Copyright © 2016 David Zhong. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//    set<int> st;
//    // Q, number of queries,
//    // y is type of query
//    int q;
//    int y;
//    int x; // is an integer
//    cin >> q;
//    cin >> y;
    int T, x, y;
    set<int> set;
    for(scanf("%d", &T); T--;)
    {
        scanf("%d%d", &y,&x);
        if(y == 1)set.insert(x);
        if(y == 2)set.erase(x);
        if(y == 3)
        {
            if(set.find(x) != set.end())
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    
    return 0;
}
