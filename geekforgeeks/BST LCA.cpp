#include<iostream>
using namespace std;
struct node
{
    int key;
    node* right;
    node* left;
};
node* newnode(int key)
{
    node* temp=new node;
    temp->key=key;
    temp->left=NULL;
    temp->right=NULL;
}
node* lca(node* root,int key1,int key2)
{
    if(root==NULL||root->key==key1||root->key==key2||(root->key>key1&&root->key<key2))
        return root;
    else if(root->key<key1)
        lca(root->right,key1,key2);
    else
        lca(root->left,key1,key2);
}
int main()
{
    node* root              =   newnode(20);
    root->left              =   newnode(8);
    root->right             =   newnode(22);
    root->left->left        =   newnode(4);
    root->left->right       =   newnode(12);
    root->left->right->left =   newnode(10);
    root->left->right->right=   newnode(14);
    cout<<lca(root,4,14)->key;
}
