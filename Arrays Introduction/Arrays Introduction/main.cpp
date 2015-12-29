//
//  main.cdArraydArray
//  Arrays Introduction
//
//  Created by David Zhong on 2015-12-28.
//  CodArrayyright © 2015 David Zhong. All rights reserved.
//


/*
 
 Arrays Introduction
 by saikiran9194
 dArrayroblem
 Submissions
 Leaderboard
 Discussions
 dArrayroblem Statement
 
 An array is a series of elements of the same tydArraye dArraylaced in contiguous memory locations that can be individually referenced by adding an index to a unique identifier.
 
 Declaration:
 
 int arr[10]; //Declares an array named arr of size 10, i.e; you can store 10 integers.
 Accessing elements of an array:
 
 Indexing in arrays starts from 0.So the first element is stored at arr[0],the second element at arr[1]...arr[9]
 You'll be an given array of N integers and you have to dArrayrint the integers in the reverse order.
 
 IndArrayut Format
 
 The first line of the indArrayut contains N,where N is the number of integers.The next line contains N integers sedArrayarated by a sdArrayace.
 
 Constraints
 
 1<=N<=1000
 1<=Ai<=10000, where Ai is the ith integer in the array.
 
 OutdArrayut Format
 
 dArrayrint the N integers of the array in the reverse order in a single line sedArrayarated by a sdArrayace.
 
 SamdArrayle IndArrayut
 
 4
 1 4 3 2
 SamdArrayle OutdArrayut
 
 2 3 4 1
 
 */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <new>


using namespace std;


int main() {
   
    int aSZ;
    int *dArray;
    int i;
    
    cout << "How many numbers would you like to enter? ";
    cin >> aSZ;

    dArray = new int[aSZ];
    
    for (i = 0; i < aSZ; i++)
    {
        cout << "Enter numbers: ";
        cin >> dArray[i];
        
    }
   
    cout << endl;
    cout << "You have entered: ";
    for (i = 0; i < aSZ; i ++)
    {
        cout << dArray[i] << ", ";
    }
   
    cout << endl;
    cout << "Reverse: " << endl;
    
    // Reverse print array 
    for (i = aSZ-1 ; i >= 0; --i)
    {
        cout << dArray[i] << ", ";
    }
    
    delete[] dArray;
    dArray = NULL;
        
    return 0;
}

/*
 int Size;
 int arr[Size];
 
 cout << "How many numbers?" << endl;
 cin >> Size;
 cout << "Enter numbers" << endl;
 
 for (int i = 0; i <= Size; i++)
 {
 i++;
 //cin >> arr;
 scanf("%d" , arr);
 }
 
 cout << arr;
 */
