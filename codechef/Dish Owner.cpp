#include<iostream>
#include<map>
#include<vector>
#include<string.h>
#include<stdio.h>
#define ll long long
ll func(ll *a,ll temp)
{
    if(a[temp]==0)
        return temp;
    ll j=func(a,a[temp]);
    a[temp]=j;
    return j;
}
int main()
{
    ll t;
    scanf("%lld",&t);
    while(t--)
    {
        ll n,i,temp,q;
        scanf("%lld",&n);
        ll handler[10001]={0};
        ll maxscore[n+1];
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&temp);
            maxscore[i]=temp;
        }
        scanf("%lld",&q);
        while(q--)
        {
            scanf("%lld",&temp);
            if(temp==0)
            {
                scanf("%lld",&temp);
                scanf("%lld",&i);
                temp=func(handler,temp);
                i=func(handler,i);
                if(temp==i)
                    printf("Invalid query!\n");
                else if(maxscore[temp]>maxscore[i])
                    handler[i]=temp;
                else if(maxscore[temp]<maxscore[i])
                    handler[temp]=i;
            }
            else
            {
                scanf("%lld",&temp);
                temp=func(handler,temp);
                printf("%lld\n",temp);
            }
        }
    }
    return 0;
}
