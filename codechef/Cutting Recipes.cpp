#include<stdio.h>
using namespace std;
int gcdof(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcdof(b,a%b);
}
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n],i;
        scanf("%d",&a[0]);
        int gcd=a[0];
        for(i=1;i<n;i++)
        {
            scanf("%d",&a[i]);
            gcd=gcdof(gcd,a[i]);
        }
        for(i=0;i<n;i++)
        {
            printf("%d ",a[i]/gcd);
        }
        printf("\n");
    }
}
