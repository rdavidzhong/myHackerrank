//
//  main.cpp
//  Reverse a linked list
//
//  Created by David Zhong on 2016-01-04.
//  Copyright © 2016 David Zhong. All rights reserved.
//

/*
 Reverse a linked list and return pointer to the head
 The input list will have at least one element
 Node is defined as
 struct Node
 {
 int data;
 struct Node *next;
 }
 */
Node* Reverse(Node *head)
{
    Node *current, *prev, *next;
    current = head;
    
    prev = NULL;
    
    while(current != NULL){
        
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    
    head = prev;
    return head;
}