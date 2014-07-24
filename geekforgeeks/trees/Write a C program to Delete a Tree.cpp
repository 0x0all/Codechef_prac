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
node* preOrder(node* root)
{
    if(root==NULL)
        return NULL;
    root->left=preOrder(root->left);
    root->right=preOrder(root->right);
    delete root;
    return NULL;
}
int main()
{
    node* root=newNode(2);
    root->left=newNode(3);
    root->right=newNode(5);
    root->left->left=newNode(6);
    root=preOrder(root);
    if(root==NULL)
        cout<<"here";
}
