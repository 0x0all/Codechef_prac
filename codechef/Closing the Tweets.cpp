#include<iostream>
#include<string>
#define ll long long
using namespace std;
int main()
{
    ll n,k,temp,res=0,i;
    cin>>n>>k;
    int a[1001]={0};
    string s;
    while(k--)
    {
        cin>>s;
        if(s.length()==5)
        {
            cin>>temp;
            if(a[temp-1]==1)
            {
                a[temp-1]=0;
                res--;
            }
            else
            {
                a[temp-1]=1;
                res++;
            }
        }
        else
        {
            res=0;
            for(i=0;i<n;i++)
                a[i]=0;
        }
        cout<<res<<"\n";
    }
    return 0;
}
