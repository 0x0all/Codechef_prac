#include<iostream>
using namespace std;
struct node
{
    int key;
    int height;
    node* left;
    node* right;
};
node* newNode(int key)
{
    node* temp=new node;
    temp->height=1;
    temp->key=key;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
int height(node* temp)
{
    if(temp==NULL)
        return 0;
    else
        return temp->height;
}
node* rightrotate(node* temp)
{
    node* temp1=temp->left;
    node* temp2=temp1->right;
    temp->left=temp2;
    temp1->right=temp;
    temp->height=max(height(temp->left),height(temp->right))+1;
    temp1->height=max(height(temp1->left),height(temp1->right))+1;
    return temp1;
}
node* leftrotate(node* temp)
{
    node* temp1=temp->right;
    node* temp2=temp1->left;
    temp->right=temp2;
    temp1->left=temp;
    temp->height=max(height(temp->left),height(temp->right))+1;
    temp1->height=max(height(temp1->left),height(temp1->right))+1;
    return temp1;
}
node* insertIn(node* temp,int key)
{
    if(temp==NULL)
        return(newNode(key));
    else if(temp->key>key)
        temp->left=insertIn(temp->left,key);
    else
        temp->right=insertIn(temp->right,key);
    temp->height=max(height(temp->left),height(temp->right))+1;
    int balance=height(temp->left)-height(temp->right);
    if(balance>1&&key<temp->left->key)
        return rightrotate(temp);
    if(balance<-1&&key>temp->right->key)
        return leftrotate(temp);
    if(balance>1&&key>temp->left->key)
    {
        temp->left=leftrotate(temp->left);
        return rightrotate(temp);
    }
    if(balance<-1&&key<temp->right->key)
    {
        temp->right=rightrotate(temp->right);
        return leftrotate(temp);
    }
    return temp;
}
int getbalance(node* root)
{
    return height(root->left)-height(root->right);
}
void preOrder(node* temp)
{
    if(temp==NULL)
        return;
    cout<<temp->key<<" ";
    preOrder(temp->left);
    preOrder(temp->right);
}
node* delNode(node* root,int key)
{
    if(root==NULL)
        return NULL;
    else if(root->key>key)
        root->left=delNode(root->left,key);
    else if(root->key<key)
        root->right=delNode(root->right,key);
    else
    {
        if(root->left==NULL||root->right==NULL)
        {
            node* temp=root->left?root->left:root->right;
            if(temp==NULL)
            {
                temp=root;
                root=NULL;
            }
            else
            {
                delete(root);
                root=temp;
            }
        }
        else
        {
            node* temp=root->right;
            while(temp->left!=NULL)
                temp=temp->left;
            root->key=temp->key;
            root->right=delNode(root->right,temp->key);
        }
    }
    if(root==NULL)
        return root;
    root->height=max(height(root->left),height(root->right))+1;
    int balance=height(root->left)-height(root->right);
    if(balance>1&&getbalance(root->left)>=0)
        return rightrotate(root);
    if(balance<-1&&getbalance(root->right)>=0)
        return leftrotate(root);
    if(balance>1&&getbalance(root->left)<0)
    {
        root->left=leftrotate(root->left);
        return rightrotate(root);
    }
    if(balance<-1&&getbalance(root->right)<0)
    {
        root->right=rightrotate(root->right);
        return leftrotate(root);
    }
    return root;

}
int main()
{
  node *root = NULL;
    root = insertIn(root, 9);
    root = insertIn(root, 5);
    root = insertIn(root, 10);
    root = insertIn(root, 0);
    root = insertIn(root, 6);
    root = insertIn(root, 11);
    root = insertIn(root, -1);
    root = insertIn(root, 1);
    root = insertIn(root, 2);
    root = delNode(root , 10);
  preOrder(root);
}
