#include<stdio.h>
#include<math.h>
#define ll long long
#include<map>
using namespace std;
map<ll,ll> my;
ll convertit(ll n)
{
    if(n<12)
        return n;
    if(my[n]==0)
        my[n]=convertit(n/2)+convertit(n/3)+convertit(n/4);
    return my[n];
}
int main()
{
    ll n;
    while(scanf("%lld",&n)>0)
    {
        printf("%lld\n",convertit(n));
    }
    return 0;
}
