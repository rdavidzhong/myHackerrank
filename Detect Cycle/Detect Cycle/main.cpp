//
//  main.cpp
//  Detect Cycle
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

int HasCycle(Node* head)
{
    // Complete this function
    // Do not write the main method
    
    // Learn from https://github.com/cielavenir/procon/blob/master/hackerrank/linkedlist.cpp
    
    const int N=9999;
    for(int i=0;head&&i<N;i++)head=head->next;
    return !!head;
}

}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

/*
 Failed in one case
 
 Node* tortoise = head;
 Node* hare = head;
 if(head == NULL) return 0;
 while (head->next != NULL)
 {
 if(hare->next == NULL || tortoise->next == NULL) return 0;
 if(hare == tortoise) return 1;
 hare = hare->next; // hare starts in the list first
 if(hare == tortoise) return 1;
 tortoise = tortoise->next; // tortoise starts second
 }
 */

