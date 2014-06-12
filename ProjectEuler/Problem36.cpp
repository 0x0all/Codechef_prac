#include<iostream>
#include<vector>
#define ll long long
using namespace std;
ll reversenum(ll a,ll num)
{
    if(a==0)
        return num;
    ll temp=a%10;
    num=num*10+temp;
    ll store=reversenum(a/10,num);
    return store;
}
string convertbinary(ll a)
{
    string temp;
    while(a!=0)
    {

        char ch[2];
        ch[0]=(a%2)+48;
        ch[1]=NULL;
        string t(ch);
        temp+=t;
        a=a/2;
    }
    return temp;
}
int main()
{
    ll sum=0;
    for(ll i=1;i<1000000;i++)
    {
        if(reversenum(i,0)==i)
        {
            string j=convertbinary(i);
            ll k=0,l=0;
            for(k=j.length()-1;k>=l;k--,l++)
                if(j[k]!=j[l])
                    break;
                if(k<l)
                {cout<<i<<" "<<j<<"\n";
                sum+=i;
                }
        }
    }

cout<<sum;
}
