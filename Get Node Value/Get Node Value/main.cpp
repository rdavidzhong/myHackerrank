//
//  main.cpp

//
//  Created by David Zhong on 2016-01-04.
//  Copyright © 2016 David Zhong. All rights reserved.
//

#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
int GetNode(Node *head,int positionFromTail)
{
    // This is a "method-only" submission.
    // You only need to complete this method.
    int len = 0;
    
    Node *traverse = head;
    
    while (traverse)
    {
        traverse = traverse->next;
        len++;
    }
    
    // Cool solution
    positionFromTail = len - positionFromTail;
    
    int DistFromHead = 1;
    traverse = head;
    
    while(traverse)
    {
        if(positionFromTail == DistFromHead) return traverse->data;
        
        traverse = traverse->next;
        DistFromHead++;
    }
    
    //* return int type
    return head->data;
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
