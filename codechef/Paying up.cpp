#include<iostream>
#define ll long long
#include<stdio.h>
#include<algorithm>
using namespace std;
int sumit(ll* a,ll i,ll n,ll sum)
{
    if(sum==0)
        return 1;
    else if(i>=n||sum<a[i])
        return 0;
    return sumit(a,i+1,n,sum-a[i])||sumit(a,i+1,n,sum);
}
int main()
{
    ll t,m,n,i,j;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        scanf("%lld",&m);
        ll a[n];
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
        sort(a,a+n);
        i=sumit(a,0,n,m);
        if(i==1)
            printf("Yes\n");
        else
            printf("No\n");
    }
}
//codechef algo
/*int main()
{
    ll t,m,n,i,j;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        scanf("%lld",&m);
        ll a[n];
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
        ll p=pow(2,n);
        for(i=0;i<p;i++)
        {
            ll sum=0;
            for(j=0;j<n;j++)
            {
                if((i>>j)&1)
                sum+=a[j];
            }
            if(sum==m)
                break;
        }
        if(i!=p)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}*/
//dynamic programming

