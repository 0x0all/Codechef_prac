#include<iostream>
#include<string>
#define ll long long
using namespace std;
int main()
{
    string s1="1";
    string s2="1";
    ll term=2;
    while(s2.length()!=1000)
    {
        while(s1.length()<s2.length())
            s1="0"+s1;
        ll carry=0,len=s2.length();
        string j=s2;
        for(ll i=len-1;i>=0;i--)
        {
            ll temp=(s1[i]-48)+(s2[i]-48)+carry;
            j[i]=(temp%10)+48;
            carry=temp/10;
        }
        if(carry!=0)
            j="1"+j;
        s1=s2;
        s2=j;
        term++;
    }
    cout<<term;
}
