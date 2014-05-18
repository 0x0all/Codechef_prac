//geekforgeeks count occurence of a key using binary search
#include<iostream>
using namespace std;
int countleft(int *a,int key,int l,int r)
{
    while(r-l>1)
    {
        int m=l+(r-l)/2;
        if(a[m]>=key)
            r=m;
        else
            l=m;
    }
    return l+1;
}
int countright(int *a,int key,int l,int r)
{
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
void countoccurence(int *a,int key,int soa)
{
    int l=countleft(a,key,-1,soa-1);//start with -1
    int r=countright(a,key+1,l,soa-1);
    cout<<r-l+1;
}
int main()
{
    int a[]={1,1,1,1,1,1,5,5,6,7,7,7,8};
    int n=sizeof(a)/sizeof(a[0]);
    countoccurence(a,5,n);
    return 0;
}
