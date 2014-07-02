#include<stdio.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    scanf("%lld",&n);
    ll a[n+1],b[n+1],num=0,output[10*n+1],i,ptr=0,next;
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
        b[i]=0;
    }
    for(i=1;i<=n;i++)
    {
        if(!b[i])
        {
            num++;
            b[i]=1;
            output[ptr++]=i;
            next=a[i];
            while(!b[next])
            {
                b[next]=1;
                output[ptr++]=next;
                next=a[next];
            }
            output[ptr++]=i;
            output[ptr++]=0;
        }
    }
    output[ptr]=-1;
    printf("%lld\n",num);
    ptr=0;
    while(output[ptr]!=-1)
    {
        if(output[ptr]==0)
            printf("\n");
        else
            printf("%lld ",output[ptr]);
        ptr++;
    }
    return 0;
}
