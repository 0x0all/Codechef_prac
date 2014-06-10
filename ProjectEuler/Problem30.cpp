#include<iostream>
#include<math.h>
#define ll long long
ll findres(ll a)
{
    ll sum=0;
    while(a!=0)
    {
        ll temp=a%10;;
        sum+=pow(temp,5);
        a/=10;
    }
    return sum;
}
using namespace std;
int main()
{
    ll res=0;
    for(ll i=2;i<=295245;i++)
    {
        ll temp=findres(i);
        if(i==temp)
            res+=i;
    }
    cout<<res;
}
