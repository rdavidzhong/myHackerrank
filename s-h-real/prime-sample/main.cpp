
/*
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <cstdlib>
#include <iostream>

using namespace std;

// Right answer
//void StairCase(int n)
//{
//
//}

int main()
{

    
}

/*
 * Complete the function below.
 */
// Question 1
vector < int > mergeArrays(vector < int > a, vector < int > b) {
    vector<int> results;
    results.reserve(a.size() + b.size());
    results.insert(results.end(), a.begin(), a.end());
    results.insert(results.end(), b.begin(), b.end());
    sort(results.begin(), results.end());
    return results;
    
}

/*
 * Complete the function below.
 */
vector < string > Braces(vector < string > values) {
    
    int i = 0;
    if(values[i] == ')' && current !='(')
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        
    }
    
    
    if(values[i] == ']' && current !='[')
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        
    }
    
    if(values[i] == '}' && current !='{')
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        
    }
    
    
}

/*
 * Complete the function below.
 */
// check string of parenthesis
vector < string > Braces(vector < string > values) {
    
    // char i = 0;
    string current = values.back();
    for (unsigned  i = 1; i < values.size(); i++)
    {
        if(values.at(i) = ')' && current !='(')
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            
        }
        
        
        if(values.at(i) = ']' && current !='[')
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            
        }
        
        if(values.at(i) = '}' && current !='{')
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            
        }
        
    }
}

//#3 find all sub-strings palindromic, how many?

