//geekforgeeks binary search rotated array
#include<iostream>
using namespace std;
int rotationplace(int *a,int l,int r)
{
    if(a[l]<a[r])//initial check
        return l;
    else
    {
        while(l<=r)
        {
            if(l==r)
                return l;
            int m=l+(r-l)/2;
            if(a[m]<a[r])
                r=m;
            else
                l=m+1;
        }
    }
    return -1;
}
int main()
{
    int a[]={7,8,9,0,1,2,3,4,5,6,7};
    int n=sizeof(a)/sizeof(int);
    cout<<rotationplace(a,0,n-1);
}
