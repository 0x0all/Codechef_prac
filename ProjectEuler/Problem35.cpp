#include<iostream>
#include<vector>
#define ll long long
using namespace std;
ll reversenum(ll a,ll num)
{
    if(a==0)
        return num;
    ll temp=a%10;
    num=num*10+temp;
    ll store=reversenum(a/10,num);
    return store;
}
int main()
{
    vector<ll> a;
    a.reserve(1000000);
    ll i;
    for(i=0;i<1000000;i++)
        a[i]=0;
    for(i=2;i<1000000;i++)
    {
        if(a[i]==0)
        {
            ll j=2;
            while(i*j<1000000)
            {
                a[i*j]=1;
                j++;
            }
        }
    }
    ll num=0;
    for(i=2;i<1000000;i++)
    {
        if(a[i]==0)
        {
           ll temp=10,countit=0;
           while(i/temp!=0)
           {
               temp*=10;
               countit++;
           }
           temp/=10;
           ll j=((i%10)*temp)+(i/10);
           countit--;
           while(i!=j&&countit>=0)
           {
               if(a[j]==1)
                break;
               j=(j%10)*temp+(j/10);
               countit--;
           }
           if(i==j)
            num++;
        }
    }
    cout<<num;
}
