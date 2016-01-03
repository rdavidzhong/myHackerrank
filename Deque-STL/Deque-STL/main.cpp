//
//  main.cpp
//  Deque-STL
//
//  Created by David Zhong on 2016-01-02.
//  Copyright © 2016 David Zhong. All rights reserved.
//

// Not done yet
#include <iostream>
#include <deque>
using namespace std;
void printKMax(int arr[], int n, int k){
    //Write your code here.
    deque<int> myD;
    for (int i = 0; i < n; i++)
    {
        for (; !myD.empty() && arr[i] > myD.back();)
        {
            myD.pop_back();
        }
        myD.push_back(arr[i]);
        
        if (i >= k && myD.front() == arr[i - k])
        {
            myD.pop_front();
        }
        
        if (i >= k - 1)
        {
            if(i < n - 1)
            {
                printf("%d ");
            }
            else
            {
                printf("%d \n", myD.front());
            }
        }
        
    }
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
