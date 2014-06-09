#include<iostream>
#include<fstream>
#define ll long long
ll prod,a[20][20];
ll diagnolright(ll i,ll j,ll index)
{
    if(i>=20||j>=20)
        return 0;
        ll temp=a[i][j];
    if(index<4)
    {
        temp*=diagnolright(i+1,j+1,index+1);
    }
    return temp;
}
ll left(ll i,ll j,ll index)
{
    if(j>=20)
        return 0;
    ll temp=a[i][j];
    if(index<4)
        temp*=left(i,j+1,index+1);
    return temp;
}
ll down(ll i,ll j,ll index)
{
    if(i>=20)
        return 0;
    ll temp=a[i][j];
    if(index<4)
        temp*=left(i+1,j,index+1);
    return temp;
}
ll diagnolleft(ll i,ll j,ll index)
{
    if(i>=20||j>=20||i<0||j<0)
        return 0;
    ll temp=a[i][j];
    if(index<4)
    {
        temp*=diagnolleft(i+1,j-1,index+1);
    }
    return temp;
}
using namespace std;
int main()
{
    prod=1;
    ifstream fin;
    fin.open("demo.txt");
    ll i,j,k;
    for(i=0;i<20;i++)
        for(j=0;j<20;j++)
                fin>>a[i][j];
    for(i=0;i<20;i++)
    {
        for(j=0;j<20;j++)
        {
        ll temp1=diagnolleft(i,j,1);
        ll temp2=diagnolright(i,j,1);
        ll temp3=left(i,j,1);
        ll temp4=down(i,j,1);
        prod=max(prod,temp1);
        prod=max(prod,temp2);
        prod=max(prod,temp3);
        prod=max(prod,temp4);
        }
    }
    cout<<prod<<"\n";
return 0;
}
