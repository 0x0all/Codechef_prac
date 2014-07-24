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
int check(node* a,node* b)
{

   if(a==NULL&&b==NULL)
        return 1;
   else
      {
      return a->key==b->key && check(a->left,b->left) && check(a->right,b->right);}
    return 0;
}
int main()
{
    node *root1 = newNode(1);
    node *root2 = newNode(1);
    root1->left = newNode(2);
    root1->right = newNode(3);
    root1->left->left  = newNode(4);
    root1->left->right = newNode(5);
    root2->left = newNode(2);
    root2->right = newNode(6);
    root2->left->left = newNode(4);
    root2->left->right = newNode(5);
    if(check(root1,root2))
        cout<<"here";
}
