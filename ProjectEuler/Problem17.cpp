#include<iostream>
#include<map>
#include<math.h>
#define ll long long
using namespace std;
        ll basics[]={0,3,3,5,4,4,3,5,5,4,3,6,6,8,8,7,7,9,8,8};
        ll tens[]={0,0,6,6,5,5,5,7,6,6};
        ll digits[]={0,0,0,7,8};
        ll sum;
void traverse(ll a,ll counter)
{

    ll temp=pow(10,counter);
    ll store;
    store=temp/10;
    temp=a%temp;
    if(counter==2)
    {
        if(temp<20)
            sum+=basics[temp]-basics[temp%10];
        else
        {
            temp/=store;
            sum+=tens[temp];
        }
    }
    else
    {
        temp/=store;
        sum+=basics[temp];
    }
    if(counter>2&&a%(store*10))
    {
        sum+=digits[counter];
    }
    if(counter==3&&a%store)
        sum+=3;
    if(a/(store*10))
    traverse(a,counter+1);
}
int main()
{
    sum=0;
    for(ll i=1;i<=1000;i++)
    {
        traverse(i,1);
    }
        cout<<sum;
}
