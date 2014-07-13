#include<iostream>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,temp;
        cin>>n>>x;
        ll k=10000;
        ll sum=0;
        while(n--)
        {
            cin>>temp;
            sum+=temp;
            if(k>temp)
                k=temp;
        }
        if(sum%x>=k)
            cout<<"-1\n";
        else
            cout<<sum/x<<"\n";
    }
    return 0;
}
