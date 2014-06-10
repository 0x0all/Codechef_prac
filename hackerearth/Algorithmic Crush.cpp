#include<iostream>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;
    long long a[n];
    for(long long i=0;i<n;i++)
        a[i]=0;
    while(m--)
    {
        long long a1,b,k;
        cin>>a1>>b>>k;
        a[a1]+=k;
        a[b+1]-=k;
    }
    long long sum=0,mx=0;
    m=0;
    while(m<n)
    {
        sum+=a[m];
        mx=max(sum,mx);
        m++;
    }
    cout<<mx<<"\n";
}
