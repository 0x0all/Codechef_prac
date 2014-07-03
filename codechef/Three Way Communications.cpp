#include<iostream>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll r,x1,y1,x2,y2,x3,y3,temp=0;
        cin>>r;
        r=r*r;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        if((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)<=r)
            temp++;
        if((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3)<=r)
            temp++;
        if((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2)<=r)
        temp++;
        if(temp>=2)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    return 0;
}
