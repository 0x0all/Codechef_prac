#include<iostream>
#include<stdio.h>
using namespace std;
struct node
{
    int key;
    node* left;
    node* right;
};
void cal(node* root)
{
   node* stack1[10];
   node* stack2[10];
   int top1=-1;
   int top2=-1;
   stack1[++top1]=root;
   int countof=0;
   int   alter=0;
   while(countof<7)
   {
       if(alter==0)
       {
           while(top1>-1)
           {
               countof++;
               cout<<stack1[top1]->key<<" ";
               if(stack1[top1]->right!=NULL)
                stack2[++top2]=stack1[top1]->right;
               if(stack1[top1]->left!=NULL)
                stack2[++top2]=stack1[top1]->left;
                top1--;
           }
           alter=1;
           cout<<endl;
       }
       else
       {
           while(top2>-1)
           {
               countof++;
               cout<<stack2[top2]->key<<" ";
               if(stack2[top2]->left!=NULL)
                stack1[++top1]=stack2[top2]->left;
               if(stack2[top2]->right!=NULL)
                stack1[++top1]=stack2[top2]->right;
                top2--;
           }
           alter=0;
           cout<<endl;
       }
   }
}
node* newNode(int key)
{
    node* temp=new node;
    temp->key=key;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
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
    cal(root);
}
