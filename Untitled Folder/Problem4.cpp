#include<iostream>
#define ll long long
using namespace std;
ll pallindrome(ll a)
{
    ll b=a,n=0;
   while(b!=0)
   {
       n=n*10+(b%10);
       b/=10;
   }
   if(n==a)
    return a;
   return 0;
}
int main()
{
    ll a=9999,b,db,largestpallindrome=0;
    while(a>=1000)
    {
        if(a%11==0)
        {
            b=9990;
            db=1;
        }
        else
        {
            b=9999;
            db=11;
        }
        while(b>=a)
        {
            if(b*a<=largestpallindrome)
            break;
            if(pallindrome(b*a))
                largestpallindrome=a*b;
            b-=db;
        }
        a--;
    }
    cout<<largestpallindrome;
    return 0;
}
