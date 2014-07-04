#include<stdio.h>
#include<iostream>
#define ll long long
using namespace std;
int main()
{
    ll t,n,i,j,res;
    scanf("%lld",&t);
    while(t--)
    {
       scanf("%lld",&n);
       ll a[n],b[n];
       res=0;
       for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
       for(i=0;i<n;i++)
            scanf("%lld",&b[i]);
       for(i=0;i<n;i++)
       {
           ll c=0;
           for(j=0;j<n;j++)
            if(a[j]<b[i]&&b[j]>=b[i])
                c++;
            res=max(c,res);
       }
       printf("%lld\n",res);
    }
    return 0;
}
