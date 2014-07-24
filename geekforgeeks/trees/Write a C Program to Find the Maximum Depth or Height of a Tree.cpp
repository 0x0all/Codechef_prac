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
int checkheight(node* a)
{
    if(a==NULL)
        return 0;
    else
        {
            return max(checkheight(a->left),checkheight(a->right))+1;
        }
}
int main()
{
 node* root=newNode(2);
 root->left=newNode(3);
 root->right=newNode(5);
 root->left->left=newNode(6);
 root->left->left->left=newNode(25);
 root->left->right=newNode(7);
 root->right->left=newNode(23);
 cout<<checkheight(root);
}
