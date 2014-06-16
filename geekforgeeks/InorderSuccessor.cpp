#include<iostream>
using namespace std;
struct node
{
    int key;
    node* left;
    node* right;
};
node* findsucc(node* root,node* n)
{
    if(n->right!=NULL)
    {
        n=n->right;
        while(n->left!=NULL)
            n=n->left;
        return n;
    }
    else
    {
         node* succ=NULL;
        while(root!=n)
        {
            if(n->key<root->key)
            {
                succ=root;
                root=root->left;
            }
            else
                root=root->right;
        }
        return succ;
    }
}
node* newnode(int key)
{
    node* temp=new node;
    temp->key=key;
    temp->left=NULL;
    temp->right=NULL;
}
int main()
{
    node* root        = newnode(4);
    root->left        = newnode(2);
    root->right       = newnode(5);
    root->left->left  = newnode(1);
    root->left->right = newnode(3);
    cout<<findsucc(root,root->left->left)->key;
}
