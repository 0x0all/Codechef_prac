//interpolation search
#include<iostream>
using namespace std;
int interpolation(int *a,int key,int l,int r)
{
    while(a[l]<=key&&a[r]>=key)
    {
        int m=((key-a[l])*(r-l))/(a[r]-a[l]);
        if(key<a[m])
            l=m+1;
        else if(key>a[m])
            r=m-1;
        else
            return m;
    }
    if(a[l]==key)
        return l;
    else
        return -1;
}
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(a)/sizeof(int);
    cout<<interpolation(a,4,0,n-1);
}
