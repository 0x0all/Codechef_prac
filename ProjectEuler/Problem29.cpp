#include<iostream>
#define ll long long
#include<string>
#include<fstream>
#include<map>
using namespace std;
ll convert(ll a,char* ch)
{
    ll temp=a%10;
    a=a/10;
    if(a==0)
    {
        ch[0]=48+temp;
        return 1;
    }
    else
    {
    ll len=convert(a,ch);
    ch[len]=temp+48;
    return len+1;
    }
}
string ret(string s,ll a,map<string,ll> mymap)
{
    for(ll i=2;i<100;i++)
    {
        string store=s;
        ll carry=0;
        ll len=s.length();
        for(ll j=len-1;j>=0;j--)
        {
            ll temp=((s[j]-48)*a)+carry;
            store[j]=(temp%10)+48;
            carry=temp/10;
        }
        if(carry!=0)
        {
            char ch[10];
            ll len1=convert(carry,ch);
            ch[len1]=NULL;
            string temp(ch);
            store=temp+store;
        }
        s=store;
        mymap[s]=1;
    }
}
int main()
{
    ifstream fin;
    fin.open("hello.txt");
    map<string,ll> mymap;
    for(ll a=2;a<=100;a++)
    {
        string s;
        fin>>s;
        mymap[s]=1;
         for(ll i=2;i<100;i++)
            {
            string store=s;
            ll carry=0;
            ll len=s.length();
            for(ll j=len-1;j>=0;j--)
            {
            ll temp=((s[j]-48)*a)+carry;
            store[j]=(temp%10)+48;
            carry=temp/10;
            }
            if(carry!=0)
            {
            char ch[10];
            ll len1=convert(carry,ch);
            ch[len1]=NULL;
            string temp(ch);
            store=temp+store;
            }
            s=store;
            mymap[s]=1;
            }
    }
    ll l=1;
    map<string,ll>::iterator it;
    for(it=mymap.begin();it!=mymap.end();it++)
        l++;
    cout<<l;
}
