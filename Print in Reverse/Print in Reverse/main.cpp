//
//  main.cpp
//  Print in Reverse
//
//  Created by David Zhong on 2016-01-04.
//  Copyright © 2016 David Zhong. All rights reserved.
//

#include <iostream>

using namespace std;

/*
 Print elements of a linked list in reverse order as standard output
 head pointer could be NULL as well for empty list
 Node is defined as
 */
 struct Node
 {
 int data;
 struct Node *next;
 }

void ReversePrint(Node *head)
{
    // This is a "method-only" submission.
    // You only need to complete this method.
    if (head == NULL)
    {
        return;
    }
    ReversePrint(head->next);
    printf("%d \n", head->data);
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
