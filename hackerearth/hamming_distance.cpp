#include<iostream>
#include<limits.h>
#include<map>
#include<algorithm>
using namespace std;
long hamm(long long x,long long y)
{
    long long z=x^y,count1=0;
    while(z)
    {
        if(z&1)
            count1++;
        z=z>>1;
    }
    return count1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,dist=LLONG_MAX;
        cin>>n;
        long long a[n],i,j;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);

        if(dist>1)
        {
            for(i=0;i<n;i++)
            {
                for(j=i+1;j<n;j++)
                {
                    long long res=hamm(a[i],a[j]);
                    if(res<dist)
                        dist=res;
                        if(dist==1)
                            break;
                }

                if(dist==1)
                    break;
            }
        }
        cout<<dist<<"\n";
    }
    return 0;
}
