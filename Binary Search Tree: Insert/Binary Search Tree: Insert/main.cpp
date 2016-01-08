//
//  main.cpp
//  Binary Search Tree: Insert
//
//  Created by David Zhong on 2016-01-07.
//  Copyright © 2016 David Zhong. All rights reserved.
//

/*
 Node is defined as
 
 typedef struct node
 {
 int data;
 node * left;
 node * right;
 }node;
 
 */

#include <iostream>

using namespace std;
typedef struct node
{
    int data;
    node * left;
    node * right;
}node;


node* insert(node*& root, int value)
{
    if (!root)
    {
        root = new node;
        root->data = value;
        root->left = root->right = NULL;
    }
    else
        insert(root->data > value ? root->left : root->right, value);
    
    return root;
}

//node * insert(node * root, int value)
//{
//    node* newNode = new node();
//    if(!root)
//    {
//        root = new node();
//    }
//    
//    node* insertIterator = root;
//    node* parent = 0;
//    
//    while(insertIterator)
//    {
//        parent = insertIterator;
//        insertIterator = value < insertIterator->data
//        ? insertIterator->left
//        : insertIterator->right;
//    }
//    
//    if(value < parent->data)
//        parent->left = newNode;
//    else
//        parent->right = newNode;
//    
//    return root;
//}

/*
 node* newNode = new node();
 bool isLeftChild = false;
 
 if (root == NULL)
 {
 root = newNode;
 }
 else
 {
 node* temp = root;
 bool done = false;
 
 while (!done)
 {
 isLeftChild = false;
 
 if (value >= temp->data)
 {
 if (temp->right != NULL)
 {
 temp = temp->right;
 }
 else
 {
 done = true;
 }
 isLeftChild = false;
 }
 else
 {
 if (temp->left != NULL)
 {
 temp = temp->left;
 }
 else
 {
 done = true;
 }
 isLeftChild = true;
 }
 }
 
 if (isLeftChild)
 {
 temp->left = newNode;
 }
 else
 {
 temp->right = newNode;
 }
 
 return root;

 */
