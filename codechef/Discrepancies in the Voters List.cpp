#include<iostream>
#include<map>
#define ll long long
using namespace std;
int main()
{
    ll n1,n2,n3,i,store,num=0;
    cin>>n1>>n2>>n3;
    map<ll,ll> arr;
    map<ll,ll> arr1;
    for(i=0;i<n1;i++)
    {
        cin>>store;
        arr[store]++;
        if(arr[store]>1)
            arr1[store]=1;
    }
    for(i=0;i<n2;i++)
    {
        cin>>store;
        arr[store]++;
        if(arr[store]>1)
            arr1[store]=1;
    }
    for(i=0;i<n3;i++)
    {
        cin>>store;
        arr[store]++;
        if(arr[store]>1)
            arr1[store]=1;
    }
    cout<<arr1.size()<<"\n";
    map<ll,ll>::iterator it;
    for(it=arr1.begin();it!=arr1.end();it++)
        cout<<it->first<<"\n";
    return 0;
}
