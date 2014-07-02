#include<stdio.h>
#include<iostream>
using namespace std;
#define ll long long
int main()
{
    ll t;
    scanf("%lld",&t);
    while(t--)
    {
        ll ten=1,temp=0,num,sizeofit=1000000,a[10],i;
        for(i=0;i<10;i++)
        {
            scanf("%lld",&a[i]);
            if(i!=0&&a[i]<sizeofit)
            {
                num=i;
                sizeofit=a[i];
            }
        }
        sizeofit++;
        a[0]++;
        while(sizeofit--)
            temp=temp*10+num;
        while(a[0]--)
            ten*=10;
        for(i=1;i<10;i++)
            if(a[i]!=0)
            {
            ten*=i;
            break;
            }
        temp=min(ten,temp);
        printf("%lld\n",temp);
    }
    return 0;
}
