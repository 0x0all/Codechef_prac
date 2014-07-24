#include<iostream>
#define ll long long
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll start=n+2,endof=3*n,mid=(endof+start)/2;
    ll q;
    while(m--)
    {
        cin>>q;
        if(q<start||q>endof)
            cout<<"0\n";
        else if(q<=mid)
        {
            ll res=n-(mid-q);
            cout<<res<<"\n";
        }
        else
        {
            ll res=n-(q-mid);
            cout<<res<<"\n";
        }
    }
    return 0;
}
