
/*
 struct node
 {
 int data;
 node* left;
 node* right;
 }*/



/*
 struct node
 {
 int data;
 node* left;
 node* right;
 }*/


#include <queue>

void LevelOrder(node * root)
{
    if (root == NULL) return;
    
    queue<node*> Q;
    Q.push(root);
    
    while (!Q.empty())
    {
        node* current = Q.front();
        cout << current->data << " ";
        if(current->left != NULL) Q.push(current->left);
        if(current->right != NULL) Q.push(current->right);
        Q.pop();
    }
    // Clear queue memeory, don't really need it here
    Q = queue<node*>();
}










//int height(node * root)
//{
//    if (root == NULL)
//    {
//        return 0;
//    }
//    int left = height(root->left);
//    int right = height(root->right);
//    
//    if(left > right)
//    {
//        return left+1;
//    }
//    else
//    {
//        return right+1;
//    }
//    
//}

//void LevelOrder(node * root)
//{
//    // Get tree level
//    // Print data of each level
//    if (root == NULL) return 0;
//    int level = height(root);
//    if ( level == 1)
//    {
//        cout << root->data << " ";
//    }
//    else if (height > 1)
//    {
//        level--;
//        levelOrder (root->left);
//        levelOrder (root->right);
//    }
//    
//}


/*
 
 if ( level == 3)
 {
 cout << root->data << " ";
 }
 else if (level > 1)
 {
 //  level--;
 LevelOrder (root->left);
 LevelOrder (root->right);
 //  level = level-1;
 }
 
 
 
 */
/*
 post_order(node* root)
 {
 if(!root) return;
 post_order(root->left);
 cout << root->data << " ";
 
 }
 post_order(node* root)
 {
 if(!root) return;
 post_order(root->left);
 cout << root->data << " ";
 }
 */




//
//    void LevelOrder(node * root)
//    {
//        if (root == NULL) return;
//        std::queue Q;
//        Q.push(root);
//        
//        while (!Q.empty())
//        {
//            Node* current = Q.front();
//            cout << current->data << " ";
//            if(current->left != NULL) Q.push(current->left);
//            if(current->left != NULL) Q.push(current->right);
//            Q.pop();
//        }
//    }
