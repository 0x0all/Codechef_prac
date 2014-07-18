#include<iostream>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y,res;
        cin>>x>>y;
        if(x<0)
            x=x*-1;
        if(y<0)
            y=y*-1;
       if(x==y)
       {
           res=x*2;
       }
       else if(x>y)
       {
           res=y*2;
           x=x-y;
           res=res+(x/2)+(x-(x/2))*3;
       }
       else
       {
           res=x*2;
           y=y-x;
           res=res+(y/2)*3+(y-(y/2));
       }
        cout<<res<<"\n";
    }
    return 0;
}
