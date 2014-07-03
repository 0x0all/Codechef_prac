#include<iostream>
#include<string>
#define ll long long
using namespace std;
ll gcd(ll a,ll b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,temp=0,i;
        string s;
        cin>>a>>s;
        if(a!=0)
        {
            for(i=0;i<s.length();i++)
            {
            temp=temp*10+(ll)(s[i]-48);
            temp=temp%a;
            }
            temp=gcd(temp,a);
            cout<<temp<<"\n";
        }
        else
            cout<<s<<"\n";
    }
    return 0;
}
