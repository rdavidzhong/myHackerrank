//
//  main.cpp
//  Find merge point of two linked list
//
//  Created by David Zhong on 2016-01-05.
//  Copyright © 2016 David Zhong. All rights reserved.
//

//Find merge point of two linked list

#include <iostream>

using namespace std;

/*
 Find merge point of two linked lists
 Node is defined as
 struct Node
 {
 int data;
 Node* next;
 }
 */

struct Node
{
    int data;
    Node* next;
};

int FindMergeNode(Node *headA, Node *headB)
{
    // Complete this function
    // Do not write the main method.
    
    // Can't use length()
    int a = 0, b = 0;
    
    for (Node *z = headA; z; a++) z = z->next; // Get headA length
    for (Node *z = headB; z; b++) z = z->next; // Get headB length
    for (; a>b; a--) // we get length of A already, therefore count down to traverse linked list
    {
        headA = headA->next;
    }
    for (; a<b; b--)
    {
        headB = headB->next;
    }
    
    // If merge point hasn't be found, keep traversing both list
    for ( ; headA->data != headB->data; )
    {
        headA = headA->next;
        headB = headB->next;
    }
    return headA->data;
 
}


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

// Nice try
/*
 
 Node* m = headA;
 int countA = 0;
 while (m != NULL)
 {
 ++countA;
 m = m->next;
 }
 return countA;
 
 Node* n = headB;
 int countB = 0;
 while (n != NULL)
 {
 ++countB;
 n = n->next;
 }
 return countB;
 
 for (int i = 0; i < countA; i++)
 {
 for (int j = 0; j < countB; j++)
 {
 if (headA == headB)
 {
 return headA->data;
 }
 headB = headB->next;
 }
 headA = headA->next;
 }
 return NULL;
 
 */

/* // Nice try
 
 if (headA == NULL || headB == NULL) return NULL;
 
 while (headA->next != NULL)
 {
 if (headA->data == headB->data) return headA->data;
 if (headA->next->data == headB->data)
 {
 return headA->next->data;
 }
 }
 
 return FindMergeNode(headA, headB->next);
 
 */
