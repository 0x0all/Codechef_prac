#include<iostream>
#include<stdio.h>
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
void morristraversal(node* root)
{
    if(root==NULL)
        return;
    node* pre,*current;
    current=root;
    while(current!=NULL)
    {
        if(current->left==NULL)
        {
            cout<<current->key<<" ";
            current=current->right;
        }
        else
        {
            pre=current->left;
            while(pre->right!=NULL&&pre->right!=current)
                pre=pre->right;
            if(pre->right==NULL)
            {
                pre->right=current;
                current=current->left;
            }
            else
            {
                pre->right=NULL;
                cout<<current->key<<" ";
                current=current->right;
            }
        }
    }
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
    morristraversal(root);
    return 0;
}
