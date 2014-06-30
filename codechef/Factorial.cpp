#include<iostream>
#include<stdio.h>
#define ll long long
int main()
{
    ll t,a;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&a);
        ll num=0;
        while(a!=0)
        {
            a=a/5;
            num+=a;
        }
        printf("%lld\n",num);
    }
    return 0;
}
