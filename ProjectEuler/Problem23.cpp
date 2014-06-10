#include<iostream>
#define ll long long
#include<vector>
using namespace std;
int main()
{
    vector<ll> a;
    int b[28124*2]={0};
    for(ll i=12;i<28124;i++)
    {
        ll sum=0;
        for(ll j=2;j<=i/2;j++)
        {
            if(i%j==0)
                sum+=j;
        }
        if(sum>i)
            a.push_back(i);
    }
    for(ll i=0;i<a.size();i++)
    {
        for(ll j=0;j<a.size();j++)
        {
            if((a[i]+a[j])<28412)
                b[a[i]+a[j]]=1;
        }
    }
    ll sum=0;
  for(ll i=1;i<28142;i++)
    if(b[i]==0)
        sum+=i;
        cout<<sum;
}
