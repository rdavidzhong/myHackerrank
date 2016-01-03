//
//  main.cpp
//  Deque-STL
//
//  Created by David Zhong on 2016-01-02.
//  Copyright © 2016 David Zhong. All rights reserved.
//

#include <iostream>
#include <deque>
using namespace std;
void printKMax(int arr[], int n, int k){
    //Write your code here.
}
int main(){
    
    int t;
    cin >> t;
    while(t>0) {
        int n,k;
        cin >> n >> k;
        int i;
        int arr[n];
        for(i=0;i<n;i++)
            cin >> arr[i];
        printKMax(arr, n, k);
        t--;
    }
    return 0;
}
