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
node* leftRotate(node* root)
{
    node* temp=root->right;
    node* temp1=temp->left;
    root->right=temp1;
    temp->left=root;
    return temp;
}
node* rightRotate(node* root)
{
    node* temp=root->left;
    node* temp1=temp->right;
    root->left=temp1;
    temp->right=root;
    return temp;
}
node* splay(node* root,int key)
{
    if(root==NULL||key==root->key)
        return root;
    else if(root->key>key)
    {
        if(root->left==NULL)
            return root;
        else
        {
            if(root->left->key>key)
            {
                root->left->left=splay(root->left->left,key);
                root=rightRotate(root);
            }
            else if(root->left->key<key)
            {
                root->left->right=splay(root->left->right,key);
                if(root->left->right!=NULL)
                root->left=leftRotate(root->left);
            }
            return root->left==NULL?root:rightRotate(root);
        }
    }
    else
    {
        if(root->right==NULL)
            return root;
        else
        {
            if(root->right->key<key)
            {
                root->right->right=splay(root->right->right,key);
                root=leftRotate(root);
            }
            else if(root->right->key>key)
            {
                root->right->left=splay(root->right->left,key);
                if(root->right->left!=NULL)
                    root->right=rightRotate(root->right);
            }
            return root->right!=NULL?root:root->right;
        }
    }
}
void preorder(node* root)
{
    if(root==NULL)
        return;
    preorder(root->left);
    cout<<root->key<<" ";
    preorder(root->right);
}
node* insertIn(node* root,int key)
{
    if(root==NULL)
        return newNode(key);
    root=splay(root,key);
    if(key==root->key)
        return root;
    else if(root->key>key)
    {
        node* temp=newNode(key);
        temp->right=root;
        temp->left=root->left;
        root->left=NULL;
        root=temp;
    }
    else
    {
         node* temp=newNode(key);
         temp->left=root;
         temp->right=root->right;
         root->right=NULL;
         root=temp;
    }
    return root;
}
int main()
{
    node *root = newNode(100);
    root->left = newNode(50);
    root->right = newNode(200);
    root->left->left = newNode(40);
    root->left->left->left = newNode(21);
    root->left->left->left->left = newNode(20);
    //root=splay(root,30);
    root=insertIn(root,25);
    preorder(root);
    return 0;
}
