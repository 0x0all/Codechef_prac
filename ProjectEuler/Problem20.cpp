#include<iostream>
#include<string>
#define ll long long
using namespace std;
ll convertcarry(char *ch,ll a)
{
    if(a==0)
        {
            return 0;
        }
    ll temp=a%10;
    a=a/10;
    ll len=convertcarry(ch,a);
    ch[len]=(char)(temp+48);
    return ++len;
}
int main()
{
    string s="1";
    for(ll i=2;i<=10000;i++)
    {
        string store=s;
        ll len=s.length(),carry=0;
        for(ll j=len-1;j>=0;j--)
        {
            ll temp=((s[j]-48)*i)+carry;
            store[j]=(temp%10)+48;
            carry=temp/10;
        }
        if(carry!=0)
        {
            char ch[10];
            ll a=carry;
            ll len=convertcarry(ch,a);
            ch[len]=NULL;
            string carrydummy(ch);
            s=carrydummy+store;
        }
        else
            s=store;
    }
    ll sum=0;
    cout<<s<<"\n";
    for(ll i=0;i<s.length();i++)
     {
         sum+=(s[i]-48);
     }
     cout<<sum;
}
