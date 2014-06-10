#include<iostream>
#include<vector>
#include<math.h>
#define ll long long
using namespace std;
ll gcd(ll a,ll b)
{
    if(a<b)
        swap(a,b);
   while(a%b!=0)
   {
       ll temp=a%b;
       a=b;
       b=temp;
   }
   return b;
}
int main()
{
    ll prod=1;
    for(ll i=20;i>0;i--)
    {
        ll store=gcd(i,prod);
        prod/=store;
        prod*=i;
    }
    cout<<prod;
 return 0;
}
