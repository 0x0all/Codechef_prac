#include<stdio.h>
int main()
{
    long t,a[]={2048,1024,512,256,128,64,32,16,8,4,2,1};
    scanf("%ld",&t);
    while(t--)
    {
        long p,res=0;
        scanf("%ld",&p);
        for(long i=0;i<12;i++)
        {
                res=res+(p/a[i]);
                p=p%a[i];
        }
        printf("%ld\n",res);
    }
}
