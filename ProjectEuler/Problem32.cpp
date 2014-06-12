#include<iostream>
#define ll long long
#include<map>
using namespace std;
int main()
{
    map<ll,ll> mainmap;
    for(ll i=1;i<2000;i++)
    {
        for(ll j=1;j<2000;j++)
        {
            int tempmap[10]={0};
            ll temp1=i,temp2=j,temp=i*j;
            while(temp1!=0)
            {
                tempmap[temp1%10]+=1;
                temp1/=10;
            }
             while(temp2!=0)
            {
                tempmap[temp2%10]+=1;;
                temp2/=10;
            }
             while(temp!=0)
            {
                tempmap[temp%10]++;
                temp/=10;
            }
            ll countit=0;
            for(ll k=1;k<10;k++)
                {
                    if(tempmap[k]==1)
                    countit++;
                }
            if(countit==9&&tempmap[0]==0)
            {
                //cout<<i<<" "<<j<<" "<<i*j<<"\n";
                mainmap[i*j]=1;
            }
        }
    }
    map<ll,ll>::iterator it;
    ll sum=0;
    for(it=mainmap.begin();it!=mainmap.end();it++)
    {
        sum+=it->first;
    }
    cout<<sum;
}
