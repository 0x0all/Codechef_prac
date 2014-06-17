#include<iostream>
using namespace std;
struct node
{
    int key;
    node* left;
    node* right;
};
node* newnode(int key)
{
    node* temp=new node;
    temp->key=key;
    temp->left=NULL;
    temp->right=NULL;
}
node* kth(node* root)
{
    static int k=0;
    node* temp=NULL;
    if(root==NULL)
        return NULL;
    if(k<3)
    temp=kth(root->left);
    k++;
    if(k==3)
        return root;
   if(k<3)
    temp=kth(root->right);
    return temp;
}
int main()
{
    node* root        = newnode(4);
    root->left        = newnode(2);
    root->right       = newnode(5);
    root->left->left  = newnode(1);
    root->left->right = newnode(3);
    cout<<kth(root)->key;
}
