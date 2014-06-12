#include<iostream>
#define ll long long
using namespace std;
ll countit(ll* s,ll m,ll n)
{
    if(n==0)
        return 1;
    if(n<0)
        return 0;
    if(m<=0&&n>=1)
        return 0;
    return countit(s,m-1,n)+countit(s,m,n-s[m-1]);
}
int main()
{
    ll a[]={1,2,5,10,20,50,100,200};
    ll countnumber=countit(a,8,200);
    cout<<countnumber;
}
