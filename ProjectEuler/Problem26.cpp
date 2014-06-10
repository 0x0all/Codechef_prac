#include<iostream>
#define ll long long
using namespace std;
int main()
{
    ll cycle=0,res;
    ll a[1000]={0};
    for(ll i=2;i<1000;i++)
    {
        if(a[i]==0)
        {
            ll j=2;
            while(j*i<1000)
            {
                a[j*i]=1;
                j++;
            }
        }
    }
    for(ll i=2;i<1000;i++)
    {
        if(a[i]==0)
        {
            ll remainder=1,tempcycles=0;
            while(1)
            {
                remainder=(10*remainder)%i;
                tempcycles++;
                if(remainder==1)
                    break;
                if(remainder==0)
                {
                    tempcycles=0;
                    break;
                }
            }
            if(tempcycles>cycle)
            {
                cycle=tempcycles;
                res=i;
            }
        }
    }
    cout<<res;
}
