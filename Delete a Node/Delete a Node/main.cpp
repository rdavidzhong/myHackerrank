//
//  main.cpp
//  Delete a Node
//
//  Created by David Zhong on 2016-01-04.
//  Copyright © 2016 David Zhong. All rights reserved.
//

/*
 Delete Node at a given position in a linked list
 Node is defined as
 struct Node
 {
 int data;
 struct Node *next;
 }
 */
Node* Delete(Node *head, int position)
{
    // Complete this method
    Node* temp1 = head;
    if(position == 0){
        head = temp1->next;
        free(temp1);
        return head;
    }
    int i;
    for(i = 0; i<position-1; i++)
        temp1 = temp1->next;
    // temp1 points to (n-1)th node
    Node* temp2 = temp1->next;
    temp1->next = temp2->next;
    free(temp2);
    return head;
}
