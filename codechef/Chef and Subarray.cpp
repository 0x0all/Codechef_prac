#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long n;
    scanf("%lld",&n);
    long long k,i,j=-1,length=0;
    for(i=0;i<n;i++)
        {
            scanf("%lld",&k);
            if(k==0)
            {
                length=max(length,i-j-1);
                j=i;
            }
            else if(i==n-1)
            {
                i=n;
                length=max(length,i-j-1);
                j=i;
            }
        }
   printf("%lld",length);
    return 0;
}
