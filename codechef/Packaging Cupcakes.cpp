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
        printf("%lld\n",n/2+1);
    }
    return 0;
}
