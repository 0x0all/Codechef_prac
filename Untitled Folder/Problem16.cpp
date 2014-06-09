#include<iostream>
#include<string>
#define ll long long
using namespace std;
int main()
{
    string s="2";
    ll i,j,k,temp;
    for(i=1;i<1000;i++)
    {
        ll len=s.length(),carry=0;
        string store=s;
        for(j=len-1;j>=0;j--)
        {
            k=2*(s[j]-48)+carry;
            store[j]=k%10+48;
            carry=k/10;
        }
        if(carry!=0)
        {
            string temp="1";
            s=temp+store;
        }
        else
            s=store;
        //cout<<s<<"\n";
    }
    ll len=s.length(),sum=0;
    for(i=0;i<len;i++)
    {
        sum+=(s[i]-48);
    }
    cout<<sum;
}
