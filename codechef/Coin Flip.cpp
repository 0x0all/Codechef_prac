#include<iostream>
#define ll long long
using namespace std;
int main()
{
    ll t,g,i,n,q;
    cin>>t;
    while(t--)
    {
        cin>>g;
        while(g--)
        {
            cin>>i>>n>>q;
            ll res;
            if(i==q)
            {
                res=n/2;
            }
            else
            {
                if(n&1)
                    res=(n/2+1);
                else
                    res=n/2;
            }
            cout<<res<<"\n";
        }
    }
    return 0;
}
