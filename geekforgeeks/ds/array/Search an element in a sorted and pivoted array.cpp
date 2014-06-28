#include<iostream>
using namespace std;
int findpivot(int* a,int low,int high)
{
    if(high<low)
        return -1;
    if(high==low)
        return low;
    int mid=(low+high)/2;
    if(mid>low&&a[mid]<a[mid-1])
        return mid;
    if(mid<high&&a[mid]>a[mid+1])
        return(mid+1);
}
int findelement(int* a,int low,int high,int key)
{
    if(high<low)
        return -1;
    int mid=(low+high)/2;
    if(a[mid]==key)
        return mid;
    else if(key<a[mid])
    {
        high=mid-1;
        return findelement(a,low,high,key);
    }
    else
    {
        low=mid+1;
        return findelement(a,low,high,key);
    }
}
int main()
{
    int a[]={3,4,5,1,2};
    int n=sizeof(a)/sizeof(int);
    int pivot=findpivot(a,0,n-1);
    int findthis=2;
    if(findthis>=a[0])
        cout<<findelement(a,0,pivot-1,findthis);
    else
        cout<<findelement(a,pivot-1,n-1,findthis);
}
