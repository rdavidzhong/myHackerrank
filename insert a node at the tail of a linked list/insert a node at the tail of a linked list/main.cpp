//
//  main.cpp
//  insert a node at the tail of a linked list
//
//  Created by David Zhong on 2016-01-03.
//  Copyright © 2016 David Zhong. All rights reserved.
//

#include <iostream>

using namespace std;
/*
 Insert Node at the end of a linked list
 head pointer input could be NULL as well for empty list
 Node is defined as
 struct Node
 {
 int data;
 struct Node *next;
 }
 */
Node* Insert(Node *head,int data)
{
    // Complete this method
    Node* temp1 = new Node[100];
    temp1->data = data;
    temp1->next = NULL;
    
    if(head == NULL)
    {
        head = temp1;
        return head;
    }
    
    Node* temp2 = new Node[100];
    temp2 = head;
    while(temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp1;
    return head;
}

int main()
{
    return 0;
}