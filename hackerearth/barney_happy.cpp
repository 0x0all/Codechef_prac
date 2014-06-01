#include<iostream>
#include<map>
#include<utility>
#define ll long long
using namespace std;
ll quicksort(ll *a,ll *b,long double *c,ll p,ll r)
{
    ll i=p-1,j=p;
    ll temp=c[r];
    while(j<r)
    {
        if(c[j]>c[r])
        {
            i++;
            swap(a[i],a[j]);
            swap(b[i],b[j]);
            swap(c[i],c[j]);
        }
        j++;
    }
    i++;
    swap(a[i],a[r]);
    swap(b[i],b[r]);
    swap(c[i],c[r]);
    return i;
}
void quick(ll *a,ll *b,long double *c,ll p,ll r)
{
    if(p<r)
    {
        ll q=quicksort(a,b,c,p,r);
        quick(a,b,c,p,q-1);
        quick(a,b,c,q+1,r);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,total=0,i;
        cin>>n;
        ll a[n],b[n],c[n];
        map<ll,ll> mymap;
        for(i=0;i<n;i++)
        {
            cin>>a[i]>>b[i];
            c[i]=a[i]+b[i];
            mymap[c[i]]=i;
        }
        //quick(a,b,c,0,n-1);
        map<ll,ll>::reverse_iterator it;
        it=mymap.rbegin();
        ll res1=it->second;
        it++;
        ll res2=it->second;
        for(i=0;i<n;i++)
        {
            if(i!=res1&&i!=res2)
                total-=b[i];
        }
        total+=a[res1]+a[res2];
        cout<<total<<"\n";
    }
    return 0;
}
