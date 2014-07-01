#include<stdio.h>
#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;
int main()
{
    ll t,n,i,j,num;
    cin>>t;
    while(t--)
    {
        num=0;
        cin>>n;
        int a[n],b[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for(i=0;i<n;i++)
            cin>>b[i];
        sort(b,b+n);
        i=n-1;
        j=n-1;
        while(i>=0&&j>=0)
        {
            if(a[i]<=b[j])
            {
                i--;
                j--;
                num++;
            }
            else
            {
                i--;
            }
        }
        cout<<num<<"\n";
    }
    return 0;
}
