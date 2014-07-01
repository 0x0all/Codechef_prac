#include<stdio.h>
#define ll long long
int main()
{
    ll t,n;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if(n&1)
            printf("BOB\n");
        else
            printf("ALICE\n");
    }
    return 0;
}
