#include<iostream>
#include<math.h>
#define ll long long
using namespace std;
int main()
{
    ll n=0;
    ll factors=2;
    while(factors<500)
    {
        n++;
        factors=1;
        ll number=n*(n+1)/2;
        if(number%2==0)
        {
            ll res=1;
            while(number%2==0)
            {
                number/=2;
                res++;
            }
            factors*=res;
        }
        ll factor=3;
        while(number>1&&factor<=number)
        {
            ll res=1;
            while(number%factor==0)
            {
                number/=factor;
                res++;
            }
            factor+=2;
            if(res>1)
            factors*=res;
        }
           // cout<<n*(n+1)/2<<" "<<factors<<"\n";
    }
    cout<<n*(n+1)/2;
    return 0;
}
