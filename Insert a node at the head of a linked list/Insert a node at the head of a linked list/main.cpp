//
//  main.cpp
//  Insert a node at the head of a linked list
//
//  Created by David Zhong on 2016-01-03.
//  Copyright © 2016 David Zhong. All rights reserved.
//

/*
 Insert Node at the begining of a linked list
 Initially head pointer argument could be NULL for empty list
 Node is defined as
 struct Node
 {
 int data;
 struct Node *next;
 }
 return back the pointer to the head of the linked list in the below method.
 */
Node* Insert(Node *head,int data)
{
    // Complete this method
    int maxSize = 100;
    Node* temp = new Node[maxSize];
    temp->data = data;
    temp->next = head;
    head = temp;
    return head;
}