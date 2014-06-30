#include<iostream>
#include<vector>
#include<algorithm>
#include<stdio.h>
#define ll long long
using namespace std;
int main()
{
    ll n,t;
    scanf("%lld",&n);
    t=n-1;
    vector<ll> arr;
    while(n--)
    {
        ll key;
        cin>>key;
        arr.push_back(key);
    }
    sort(arr.begin(),arr.end());
    for(n=0;n<=t;n++)
        printf("%lld\n",arr[n]);
    return 0;
}
