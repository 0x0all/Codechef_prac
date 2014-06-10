#include<iostream>
#include<map>
#define ll long long
using namespace std;
ll factorial(ll a)
{
    ll prod=1;
    while(a>0)
    {
        prod*=a;
        a--;
    }
    return prod;
}
int main()
{
    ll num=10,j=1;
    ll a[10]={0};
    ll sum=1000000,checksum=0;
    while(num!=0)
    {
        ll tempsum=checksum,res=factorial(num-1),i;
        for(i=0;i<10;i++)
        {
            if(a[i]==0)
            {
                tempsum+=res;
                if(tempsum>=sum)
                    break;
            }
        }
        checksum=tempsum-res;
        num--;
        a[i]=j++;
    }
   for(ll i=1;i<=10;i++)
    {
        for(ll j=0;j<10;j++)
        {
            if(a[j]==i)
                cout<<j;
        }
    }
    return 0;
}
