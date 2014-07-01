#include<stdio.h>
#include<math.h>
#define ll long long
using namespace std;
int main()
{
    ll a,n,k,i;
    scanf("%lld",&a);
    scanf("%lld",&n);
    scanf("%lld",&k);
    ll arr[101]={0};
    ll temp=floor(log(a)/log(n+1));
    while(a>n+1)
    {
        ll power=pow(n+1,temp);
        while(a>=power)
        {
            arr[temp]++;
            a-=power;
        }
        temp--;
    }
    arr[0]=a;
    for(i=0;i<k;i++)
        printf("%lld ",arr[i]);
    return 0;
}
