//
//  main.cpp
//  Compare two linked lists
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

int CompareLists(Node *headA, Node* headB)
{
    // This is a "method-only" submission.
    // You only need to complete this method
    
    if (headA == NULL && headB == NULL)
    {  return 1;  }
    if (headA == NULL && headB != NULL)
    {  return 0;  }
    if (headB != NULL && headB == NULL)
    {  return 0;  }
    if (headA->data != headB->data)
    {  return 0;  }
    
    return CompareLists(headA->next, headB->next);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
