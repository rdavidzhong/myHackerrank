//
//  main.cpp
//  Delete duplicate-value nodes from a sorted linked list
//
//  Created by David Zhong on 2016-01-05.
//  Copyright © 2016 David Zhong. All rights reserved.
//

#include <iostream>

using namespace std;


 
 
 struct Node
 {
     int data;
     struct Node *next;
 };
 
Node* RemoveDuplicates(Node *head)
{
    // This is a "method-only" submission.
    // You only need to complete this method.
    
     // Learn how to use temp
    Node* current = head, *temp;
    
    if (head == NULL) return head;
    if (head->next == NULL) return head;
    else
    {
        while (current->next != NULL)
        {
            if(current->data == current->next->data)
            {
                temp = current->next->next;
                current->next = temp;
            }
            else
            {
                current = current->next;
            }// end if
            
        }//end while
        return head;
    }
}

    




int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

/*
 int* dArray;
 dArray = new int [100];
 
 if (head == head->next)
 {
 head = head->next->next;
 }
 
 delete dArray;
 delete[] dArray;
 */
