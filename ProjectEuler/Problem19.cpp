#include<iostream>
#define ll long long
using namespace std;
int main()
{
    ll a=1;
    ll sun=0;
    for(ll i=1901;i<=2000;i++)
    {
        for(ll j=0;j<12;j++)
        {
            if(j==0||j==2||j==4||j==6||j==7||j==9||j==11)
                a+=31;
            else if(j==1)
            {
                if(i%4==0)
                    a+=29;
                else
                    a+=28;
            }
            else
                a+=30;
            if(a%7==6)
                sun++;
        }
    }
    cout<<sun;
}
