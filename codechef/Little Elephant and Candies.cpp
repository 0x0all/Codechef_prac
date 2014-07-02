#include<stdio.h>>
#define ll long
int main()
{
    ll t,n,c,j,store;
    scanf("%ld",&t);
    while(t--)
    {
        store=0;
        scanf("%ld",&n);
        scanf("%ld",&c);
        for(ll i=0;i<n;i++)
        {
             scanf("%ld",&j);
             store+=j;
        }
        if(store<=c)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
