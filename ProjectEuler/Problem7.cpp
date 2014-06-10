#include<iostream>
#define ll long long
using namespace std;
int main()
{
    ll a[1000000]={0};
    ll n=0,i;
    for(i=2;i<1000000;i++)
    {
        if(a[i]==0)
        {
            n++;
            if(n==10001)
                break;
        }
        ll j=i*2;
        while(j<1000000)
        {
            a[j]=1;
            j+=i;
        }
    }
    cout<<i<<" "<<n;
}
