#include<iostream>
#include<vector>
#define ll long long
using namespace std;
int main()
{
    ll sum=0;
    vector<ll> a;
    a.reserve(2000000);
    for(ll i=2;i<2000000;i++)
    {
        if(a[i]==0)
        {
            sum+=i;
            ll n=2;
            while(n*i<2000000)
            {
                a[n*i]=1;
                n++;
            }
        }
    }
    cout<<sum;
}
