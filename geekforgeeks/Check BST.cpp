#include<iostream>
#include<limits.h>
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
bool checkBST(node* root,int minr,int maxr)
{
    if(root==NULL)
        return true;
    if(!checkBST(root->left,minr,root->key-1))
        return false;
    if(root->key<minr||root->key>maxr)
    return false;
    if(!checkBST(root->right,root->key+1,maxr))
        return false;
    return true;
}
int main()
{
    node* root        = newnode(3);
    root->left        = newnode(2);
    root->right       = newnode(5);
    root->left->left  = newnode(1);
    root->left->right = newnode(4);
    if(checkBST(root,INT_MIN,INT_MAX))
        cout<<"IT IS A BST:";
    else
        cout<<"IT IS NOT A BST:";
}
