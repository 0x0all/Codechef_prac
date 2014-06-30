#include<iostream>
#include<stdio.h>
#include<string>
#include<fstream>
#define ll long long
using namespace std;
string to_string(string ch,ll a)
{
    if(a==0)
        return "";
    ll val=a%10;
    string temp=to_string(ch,a/10);
    temp=temp+(char)(val+48);
    return temp;
}
string multiply(string s,ll num)
{
    string temp=s;
    ll carry=0;
    for(ll i=temp.length()-1;i>=0;i--)
    {
        ll j=((temp[i]-48)*num)+carry;
        temp[i]=(j%10)+48;
        carry=j/10;
    }
    s=temp;
    if(carry>0)
    {
        s=to_string("",carry)+s;
    }
    return s;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int i;
        cin>>i;
        string k=to_string("",i);
        int j=i-1;
        while(j!=0)
        {
            k=multiply(k,j);
            j--;
        }
        cout<<k<<"\n";
    }
    return 0;
}
