#include<stdio.h>
int main()
{
    long t;
    scanf("%ld",&t);
    while(t--)
    {
        long long n,m;
        scanf("%lld",&n);
        scanf("%lld",&m);
        long long aodd,aeven,bodd,beven;
        aeven=n/2;
        aodd=n-aeven;
        beven=m/2;
        bodd=m-beven;
        aeven=(aeven*bodd)+(beven*aodd);
        if(aeven!=0)
        {
        beven=aeven;
        n=n*m;
        m=n;
        while(m%beven!=0)
        {
            bodd=m%beven;
            m=beven;
            beven=bodd;
        }
        n=n/beven;
        aeven=aeven/beven;
        }
        else
            n=1;
        printf("%lld/%lld\n",aeven,n);
    }
    return 0;
}
