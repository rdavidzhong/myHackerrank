//
//  main.cpp
//  Insert a node at a specific position in a linked list
//
//  Created by David Zhong on 2016-01-03.
//  Copyright © 2016 David Zhong. All rights reserved.
//

#include <iostream>

/*
 Insert Node at a given position in a linked list
 head can be NULL
 First element in the linked list is at position 0
 Node is defined as
 struct Node
 {
 int data;
 struct Node *next;
 }
 */
Node* InsertNth(Node *head, int data, int position)
{
    // Complete this method only
    // Do not write main function.
    // Special cases:
    // Node is empty
    Node* temp1 = new Node();
    temp1->data = data;
    temp1->next = NULL;
    
    if(position == 0){
        
        temp1->next = head;
        head = temp1;
        return head;

    }
    else{

        Node* temp2 = head;
        for(int i = 0; i< position - 1; i++){
            temp2 = temp2->next;
        }
        temp1->next = temp2->next;
        temp2->next = temp1;
    }
    return head;
}
