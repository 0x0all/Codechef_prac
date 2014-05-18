//geekforgeeks find floor of a key using binary search
#include<iostream>
using namespace std;
int floor(int *a,int key,int soa)
{
    if(a[0]>key)
        return -1;
    else
    {
        int l=0;
        int r=soa-1;
        while(r-l>1)
        {
            int m=l+(r-l)/2;
            if(a[m]>=key)
                r=m;
            else
                l=m;
        }
        return l;
    }
}
int main()
{
    int a[]={-1, 2, 5, 6, 8, 9, 10};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<a[floor(a,4,n)];
}
