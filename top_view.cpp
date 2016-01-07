//

/*
 struct node
 {
 int data;
 node* left;
 node* right;
 };
 
 */

static void post_order(node* root)
{
    if (!root) return;
    
    post_order(root->left);
    cout << root->data << " ";
}

static void pre_order(node* root)
{
    if (!root) return;
    
    cout << root->data << " ";
    pre_order(root->right);
    
}
void top_view(node * root)
{
    post_order(root);
    pre_order(root->right);
    
    //Same result
//    post_order(root->left);
//    pre_order(root);
}
