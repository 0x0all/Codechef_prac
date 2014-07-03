#include<stdio.h>
#include<algorithm>
using namespace std;
#define ll long long
int main()
{
    ll t;
    scanf("%lld",&t);
    while(t--)
    {
        ll n,i,res;
        scanf("%lld",&n);
        ll a[n];
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
        sort(a,a+n);
        res=a[1]-a[0];
        for(i=1;i<n-1;i++)
            res=min(res,a[i+1]-a[i]);
        printf("%lld\n",res);
    }
    return 0;
}
