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
node* header=NULL;
node* endof=NULL;
void inorder(node* root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    if(header==NULL)
        header=endof=root;
    else
    {
            endof->right=root;
            root->left=endof;
            endof=root;
    }
    inorder(root->right);
}
int main()
{
    node* root=newNode(4);
    root->left=newNode(2);
    root->right=newNode(6);
    root->left->left=newNode(1);
    root->left->right=newNode(3);
    root->right->left=newNode(5);
    root->right->right=newNode(7);
    inorder(root);
    while(header!=NULL)
    {
        cout<<header->key<<" ";
        header=header->right;
    }
}
