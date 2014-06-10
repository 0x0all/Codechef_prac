#include<iostream>
#include<math.h>
#include<stdlib.h>
#define ll long long
using namespace std;
int isprime(ll a)
{
    for(ll i=2;i<=sqrt(a);i++)
        if(a%i==0)
        return 0;
    return 1;
}
int main()
{
    int b[1001]={0};
    for(ll i=2;i<1001;i++)
    {
        if(b[i]==0)
        {
            ll j=2;
            while(i*j<1001)
            {
                b[i*j]=1;
                j++;
            }
        }
    }
    ll amax=0,bmax=0,nmax=0,i,j;
    for(i=1000;i>-1001;i--)
    {

        for(j=2;j<1000;j++)
        {
            if(b[j]==0)
            {
                ll n=0;
            while(1)
            {if(isprime(abs(n*n+i*n+j)))
                    n++;
              else
                break;
            }
            if(n>nmax)
            {
            amax=i;
            bmax=j;
            nmax=n;
            }
            }
        }
    }
    cout<<amax*bmax;
    return 0;
}
