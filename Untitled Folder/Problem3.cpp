#include<iostream>
#include<math.h>
#define ll long long
using namespace std;
int main()
{
    ll n=28,lastfactor=0,maxfactor=1,factor;
    if(n%2==0)
    {
        lastfactor=2;
        while(n%2==0)
            n/=2;
    }
    else
        lastfactor=1;
    factor=3;
    maxfactor=(ll)sqrt(n);
    while(n>1&&factor<=maxfactor)
        {
            lastfactor=factor;
            while(n%factor==0)
                n/=factor;
                factor+=2;
            maxfactor=sqrt(n);
        }
    if(n==1)
        cout<<lastfactor;
    else
        cout<<n;
}
