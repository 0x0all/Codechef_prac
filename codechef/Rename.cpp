#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
        int a[n+1],b[n+1],res=1;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            b[a[i]]=i;

        }
        for(int i=1;i<=n;i++)
            if(a[i]!=b[i])
            res=0;
        if(res)
            cout<<"ambiguous\n";
        else
            cout<<"not ambiguous\n";
            cin>>n;
    }
    return 0;
}
