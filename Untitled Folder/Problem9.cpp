#include<iostream>
#include<vector>
#define ll long long
using namespace std;
int main()
{
    ll m=1,n,r;
    ll a=0,b=0,c=0,sum=1000;
    while(a+b+c!=sum)
    {
        a=0;
        b=0;
        c=0;
        n=1;
        m++;
        while(n<m&&a+b+c<sum)
        {
            a=m*m-n*n;
            b=2*m*n;
            c=m*m+n*n;
            ll temp1=a,temp2=b,temp3=c,i=2;
            while(a+b+c<sum)
            {
                a=temp1*i;
                b=temp2*i;
                c=temp3*i;
                i++;
            }
            n++;
        }
    }
    cout<<a*b*c;
    return 0;
}
