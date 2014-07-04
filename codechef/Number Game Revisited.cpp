#include<stdio.h>
#define ll long long
int main()
{
    ll t,n;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if((n-1)%4==0)
            printf("ALICE\n");
        else
            printf("BOB\n");
    }
}
