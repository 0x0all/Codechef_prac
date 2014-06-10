#include<iostream>
#include<vector>
long long sum=0;
using namespace std;
void combinationutil(long long *a,long long *data,long long r,long long start,long long end1,long long index,long long number)
{
    if(index==r)
    {
        long long prod=1;
        cout<<"combination:"<<"\n";
        for(long long j=0;j<r;j++)
            {
                prod*=data[j];
                cout<<data[j]<<" ";
            }
            cout<<"\n";

        long long temp=number/prod;
        long long res=(temp*(2*prod+(temp-1)*prod))/2;
        cout<<prod<<" "<<"sum of the combination:"<<res;
        if(r%2==0)
            {
                sum-=res;
                cout<<" subtracted\n";
            }
        else
            {
                sum+=res;
                cout<<" added\n";
            }
        return;
    }
    for(long long i=start;i<end1&&end1-i+1>r-index;i++)
    {
        data[index]=a[i];
        combinationutil(a,data,r,i+1,end1,index+1,number);
    }
}
int main()
{
    long long t=999;
    long long a[]={3,5};
    long long n=sizeof(a)/sizeof(long long);
    for(long long i=0;i<n;i++)
    {
        long long data[i+1];
        combinationutil(a,data,i+1,0,n,0,t);
    }
    cout<<"result:"<<sum<<"\n";
}
