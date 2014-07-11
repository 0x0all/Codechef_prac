//Removed constraint of count to be n/2
#include<iostream>
using namespace std;
//basic approach takes n^2 time complexity
void method1()
{
    int a[] = {2, 2, 3, 5, 2, 2, 6};
    int n=sizeof(a)/sizeof(int);
    int maxof,maxon=0;
    for(int i=0;i<n;i++)
    {
        int countit=1;
        int num=a[i];
        for(int j=i+1;j<n;j++)
            if(a[j]==num)
            countit++;
        if(countit>maxon)
        {
            maxon=countit;
            maxof=a[i];
        }
    }
    cout<<maxof;
}
//avl tree approach takes nlogn time complexity
//but will require linked list implementation which is slow as comapred to array
struct node
{
    int key;
    int height;
    int countit;
    node* left;
    node* right;
};
node* newNode(int key)
{
    node* temp=new node;
    temp->key=key;
    temp->height=1;
    temp->countit=1;
    temp->left=NULL;
    temp->right=NULL;
}
int height(node* temp)
{
    if(temp==NULL)
        return 0;
    return temp->height;
}
node* leftRotate(node* root)
{
    node* temp=root->right;
    node* temp1=temp->left;
    root->right=temp1;
    temp->left=root;
    root->height=max(height(root->left),height(root->right))+1;
    temp->height=max(height(temp->left),height(temp->right))+1;
    return temp;
}
node* rightRotate(node* root)
{
    node* temp=root->left;
    node* temp1=temp->right;
    root->left=temp1;
    temp->right=root;
    root->height=max(height(root->left),height(root->right))+1;
    temp->height=max(height(temp->left),height(temp->right))+1;
    return temp;
}
node* insertIn(node* root,int key,int &res,int &countit)
{
    if(root==NULL)
        return (newNode(key));
    else if(root->key==key)
        {
            root->countit++;
            if(root->countit>countit)
            {
                res=root->key;
                countit=root->countit;
            }
        }
    else if(root->key>key)
        root->left=insertIn(root->left,key,res,countit);
    else if(root->key<key)
        root->right=insertIn(root->right,key,res,countit);
    root->height=max(height(root->left),height(root->right))+1;
    int balance=height(root->left)-height(root->right);
    if(balance>1&&root->left->key>key)
        return rightRotate(root);
    if(balance<-1&&root->right->key<key)
        return leftRotate(root);
    if(balance>1&&root->left->key<key)
    {
        root->left=leftRotate(root->left);
        return rightRotate(root);
    }
    if(balance<-1&&root->right->key>key)
    {
        root->right=rightRotate(root->right);
        return leftRotate(root);
    }
    return root;
}
void preorder(node* root)
{
    if(root==NULL)
        return;
    cout<<root->key<<" ";
    preorder(root->left);
    preorder(root->right);
}
void method2()
{
    int a[] = {2, 2, 3, 5, 2, 2, 6};
    int n=sizeof(a)/sizeof(int);
    node* root=NULL;
    int countit=0;
    int res;
    for(int i=0;i<n;i++)
        root=insertIn(root,a[i],res,countit);
        cout<<res;
}
//method3 Moore's Voting algorithm
void method3()
{
    int a[]={2, 2, 3, 5, 2, 5};
    int n=sizeof(a)/sizeof(int);
    int index=0;
    int countit=1;
    for(int i=1;i<n;i++)
    {
        if(a[index]==a[i])
            countit++;
        else
            countit--;
        if(countit==0)
        {
            index=i;
            countit=1;
        }
    }
    cout<<a[index];
}
int main()
{
    method3();
}
