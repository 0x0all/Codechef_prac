#include<iostream>
using namespace std;
int main()
{
    int n=1,i,j;
    cout<<"1\n";
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            int temp=(i*(i+1))/2+1;
            for(j=0;j<=i;j++)
                cout<<temp++<<" ";
        }
        else
        {
            int temp=(i+1)*(i+2)/2;
            for(j=0;j<=i;j++)
                cout<<temp--<<" ";
        }
        cout<<"\n";
    }
}
