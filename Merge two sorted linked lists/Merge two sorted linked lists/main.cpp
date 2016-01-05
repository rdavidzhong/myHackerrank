//
//  main.cpp
//  Merge two sorted linked lists
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

Node* MergeLists(Node *headA, Node* headB)
{
    // This is a "method-only" submission.
    // You only need to complete this method
    if (headA == NULL) return headB;
    if (headB == NULL) return headA;
    
    if (headA->data < headB->data)
    {
        headA->next = MergeLists(headA->next, headB);
        return headA;
    }
    else
    {
        headB->next = MergeLists(headB->next, headA);
        return headB;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
