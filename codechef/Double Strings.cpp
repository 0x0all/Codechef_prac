#include<iostream>
#include<stdio.h>
#define ll long long
using namespace std;
int main()
{
    ll t,n;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if(n&1)
            printf("%lld\n",n-1);
        else
            printf("%lld\n",n);
    }
    return 0;
}
