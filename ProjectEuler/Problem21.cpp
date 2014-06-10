#include<iostream>
#include<math.h>
#define ll long long
using namespace std;
ll a[30000]={0};
int main()
{
    ll total=0;
    for(ll i=2;i<=10000;i++)
    {
        ll sum=0;
        for(ll j=1;j<=i/2;j++)
        {
            if(i%j==0)
                sum+=j;
        }
        a[i]=sum;
        if(sum!=i&&a[sum]==i)
        {
            total=total+i+sum;
            cout<<i<<" "<<sum<<"\n";
        }
    }
    cout<<"total "<<total<<"\n";
}
