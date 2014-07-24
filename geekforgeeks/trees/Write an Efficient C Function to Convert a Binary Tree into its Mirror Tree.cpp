#include<iostream>
using namespace std;
struct node
{
    int key;
    node* left;
    node* right;
};
node* newNode(int key)
{
    node* temp=new node;
    temp->key=key;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
void preOrder(node* root)
{
    if(root==NULL)
        return;
    preOrder(root->left);
    preOrder(root->right);
    node* temp=root->left;
    root->left=root->right;
    root->right=temp;
}
void inOrder(node* root)
{
    if(root==NULL)
        return;
    inOrder(root->left);
    cout<<root->key<<" ";
    inOrder(root->right);
}
int main()
{
     node* root=newNode(2);
    root->left=newNode(3);
    root->right=newNode(5);
    root->right->left=newNode(4);
    root->left->left=newNode(6);
    inOrder(root);
    cout<<"\n";
    preOrder(root);
    inOrder(root);
    return 0;
}
