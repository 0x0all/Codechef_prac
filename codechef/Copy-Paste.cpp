#include<iostream>
#include<map>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        map<ll,ll> mymap;
        ll n,temp;
        cin>>n;
        for(ll i=0;i<n;i++)
        {
            cin>>temp;
            mymap[temp]=1;
        }
        cout<<mymap.size()<<"\n";
    }
    return 0;
}
