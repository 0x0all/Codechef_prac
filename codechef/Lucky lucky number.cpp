#include<iostream>
#define ll long long
using namespace std;
int main()
{
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll temp=n/7;
           while(temp>=0)
           {
               if((n-temp*7)%4==0)
               {
                   break;
               }
               temp--;
           }
           if(temp>=0)
            cout<<temp*7<<"\n";
           else
            cout<<"-1\n";
    }
    return 0;
}
