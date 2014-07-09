#include<iostream>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll k,n,i,res=1;
        cin>>n>>k;
        n--;
        k--;
        if(k>n/2)
            k=n-k;
        for(i=1;i<=k;i++)
        {
            res=res*(n--);
            res=res/(i);
        }
        cout<<res<<"\n";
    }
}
