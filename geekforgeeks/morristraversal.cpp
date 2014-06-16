#include<iostream>
using namespace std;
struct node
{
    int a;
    node *left;
    node *right;
};
void morristraversal(node* root)
{
    node* current=root;
    while(current!=NULL)
    {
        if(current->left==NULL)
        {
            cout<<current->a<<"\n";
            current=current->right;
        }
        else
        {
            node* pred=current->left;
            while(pred->right!=NULL&&pred->right!=current)
                pred=pred->right;
            if(pred->right==NULL)
            {
                pred->right=current;
                current=current->left;
            }
            else
            {
                cout<<current->a<<"\n";
                pred->right=NULL;
                current=current->right;
            }
        }
    }
}
node* newnode(int a)
{
    node* temp=new node;
    temp->a=a;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
int main()
{
    node* root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);
     root->right->left=newnode(6);
      root->right->right=newnode(7);
    morristraversal(root);
}
