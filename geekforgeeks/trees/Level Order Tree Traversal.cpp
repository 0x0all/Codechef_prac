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
void cal(node* root)
{
    int front1=0,rear1=1;
    int front2=0,rear2=1;
    node* queueof[10];
    queueof[0]=root;
    while(front2<7)
    {
        while(front2<rear2)
        {

            cout<<queueof[front2]->key<<" ";
            if(queueof[front2]->left!=NULL)
            queueof[rear1++]=queueof[front2]->left;
            if(queueof[front2]->right!=NULL)
            queueof[rear1++]=queueof[front2]->right;
                front2++;

        }
        cout<<endl;
        rear2=rear1;
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
    cal(root);
}
