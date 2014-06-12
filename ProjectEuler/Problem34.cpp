#include<iostream>
#define ll long long
using namespace std;
ll fact(ll a)
{
    ll prod=1;
    while(a!=0)
        {
            prod*=a;
            a--;
        }
    return prod;
}
int main()
{
    ll prod=0;
    for(ll i=11;i<65535;i++)
    {
        ll temp=i,sum=0;
        while(temp!=0)
        {
            ll j=temp%10;
            sum+=fact(j);
            temp/=10;
        }
        if(i==sum)
            prod+=i;
    }
    cout<<prod;
}
