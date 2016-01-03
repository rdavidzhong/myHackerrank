//
//  main.cpp
//  Lower Bound-STL
//
//  Created by David Zhong on 2015-12-31.
//  Copyright © 2015 David Zhong. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int N;
    cin >> N;
    vector<int> v(N);
    
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }
    
    int T, x;
    for(cin >> T; T--;)
    {
        cin >> x;
        auto it=lower_bound(v.begin(), v.end(), x);
        if(*it  == x)
        {
            //cout << "Yes %d\n" << %d << endl;
            printf("Yes %d\n");
        }
        else
        {
            printf("No %d\n");
        }
        //distance(v.begin(),it)+1;
    }
    
    return 0;
}
