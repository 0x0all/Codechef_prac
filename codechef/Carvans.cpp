#include<stdio.h>
int main()
{
    long t;
    scanf("%ld",&t);
    while(t--)
    {
        long n,j,currmin,i,temp=1;
        scanf("%ld",&n);
        scanf("%ld",&j);
        currmin=j;
        for(i=1;i<n;i++)
        {
           scanf("%ld",&j);
            if(j<=currmin)
                {
                    temp++;
                    currmin=j;
                }
        }
        printf("%ld\n",temp);
    }
    return 0;
}
