#include<iostream>
using namespace std;
class node
{
private:
    int a;
    node* left;
    node* right;
public:
    void setkey(int a)
    {
        this->a=a;
    }
    void setleft(node* ptr)
    {
        this->left=ptr;
    }
    void setright(node* ptr)
    {
        this->right=ptr;
    }
    int returnkey()
    {
        return a;
    }
    node* returnleft()
    {
        return left;
    }
    node* returnright()
    {
        return right;
    }
};
node* root;
void insertin(int key)
{
    if(root==NULL)
        {
            root=new node();
            root->setkey(key);
        }
    else
    {
        node* temp=root;
        int found=0;
        while(found==0)
        {
            if(temp->returnkey()>key&&temp->returnleft()!=NULL)
            temp=temp->returnleft();
            else if(temp->returnkey()>key&&temp->returnleft()==NULL)
                found=1;
            if(temp->returnkey()<key&&temp->returnright()!=NULL)
                temp=temp->returnright();
            else if(temp->returnkey()<key&&temp->returnright()==NULL)
                found=1;
        }
        node* insertit=new node;
        insertit->setkey(key);
        if(temp->returnkey()>key)
            temp->setleft(insertit);
        else
            temp->setright(insertit);
    }
}
void inorder(node *temp)
{
    if(temp==NULL)
        return;
    inorder(temp->returnleft());
    cout<<temp->returnkey()<<" ";
    inorder(temp->returnright());
}
void postorder(node* temp)
{
    if(temp==NULL)
        return;
    postorder(temp->returnleft());
    postorder(temp->returnright());
    cout<<temp->returnkey()<<" ";
}
void preorder(node* temp)
{
     if(temp==NULL)
        return;
      cout<<temp->returnkey()<<" ";
    postorder(temp->returnleft());
    postorder(temp->returnright());
}
void del(int key)
{
    node* temp=root;
    node* pred=temp;
    while(temp!=NULL)
    {

        if(temp->returnkey()>key)
            {
                pred=temp;
                temp=temp->returnleft();
            }
        else if(temp->returnkey()<key)
            {
                pred=temp;
                temp=temp->returnright();
            }
        else
            break;
    }
    if(temp==NULL)
        cout<<"No such key present:\n";
    else
    {
        if(temp->returnleft()==NULL&&temp->returnright()==NULL)
            {
                if(temp==root)
                root=NULL;
                else if(temp!=pred&&pred->returnkey()<key)
                pred->setright(NULL);
                else if(temp!=pred)
                pred->setleft(NULL);
                delete temp;
            }
        else if(temp->returnleft()!=NULL&&temp->returnright()!=NULL)
        {
            node* temp1=temp->returnleft();
            node* pred1=temp;
            while(temp1->returnright()!=NULL)
                {
                    pred1=temp1;
                    temp1=temp1->returnright();
                }
            if(temp1->returnleft()!=NULL)
            {
                pred1->setright(temp1->returnleft());
                temp->setkey(temp1->returnkey());
                delete temp1;
            }
            else
            {
                if(pred1->returnleft()==temp1)
                {
                    temp->setkey(temp1->returnkey());
                    pred1->setleft(NULL);
                }
                else
                {
                temp->setkey(temp1->returnkey());
                pred1->setright(NULL);
                }
                delete temp1;
            }
        }
        else if(temp->returnleft()!=NULL)
        {
            if(pred->returnkey()>key)
                pred->setleft(temp->returnleft());
            else
                pred->setright(temp->returnleft());
                delete temp;
        }
        else
        {
            if(pred->returnkey()>key)
                pred->setleft(temp->returnright());
            else
                pred->setright(temp->returnright());
                delete temp;
        }
    }
}
void morristraversal()
{
    node* current=root;
    while(current!=NULL)
    {
        if(current->returnleft()==NULL)
        {
            cout<<current->returnkey()<<" ";
            current=current->returnright();
        }
        else
        {
            node* pred=current->returnleft();
            while(pred->returnright()!=NULL&&pred->returnright()!=current)
            pred=pred->returnright();
            if(pred->returnright()==NULL)
            {
                pred->setright(current);
                current=current->returnleft();
            }
            else
            {
                pred->setright(NULL);
                cout<<current->returnkey()<<" ";
                current=current->returnright();
            }
        }
    }
}
int main()
{
    int over=0;
    while(over!=-1)
    {
        int a;
        cin>>over;
        switch(over)
        {
            case 1:cout<<"Insert the value:";
            cin>>a;
            insertin(a);
            break;
            case 2:cout<<"Inorder list:";
            inorder(root);
            cout<<"\n";
            break;
            case 3:cout<<"Preorder list:";
            preorder(root);
            cout<<"\n";
            break;
            case 4:cout<<"Postorder list:";
            postorder(root);
            cout<<"\n";
            break;
            case 5:cout<<"Enter the element to be deleted:";
            cin>>a;
            del(a);
            break;
            case 6:cout<<"Morris list:";
            morristraversal();
            cout<<"\n";
            break;
            case -1:cout<<"Ending the execution:\n";
        }
    }
}
