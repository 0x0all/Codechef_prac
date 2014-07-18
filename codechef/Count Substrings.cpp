#include<iostream>
#include<string>
#define ll long long
using namespace std;
int main()
{
    ll t,n,one,i;
    cin>>t;
    while(t--)
    {
        one=0;
        string s;
        cin>>n>>s;
        for(i=0;i<n;i++)
            if(s[i]=='1')
                one++;
        one=one*(one+1);
        cout<<one/2<<"\n";
    }
    return 0;
}
