#include<iostream>
#include<algorithm>
using namespace std;
int findminima(int *a,int l,int r)
{
   if(r<l)
    return a[0];
   if(r==l)
    return a[l];
   int m=l+(r-l)/2;
   if(m<r&&a[m+1]<a[m])
    return a[m+1];
   if(a[m]==a[r]&&a[m]==a[l])
    return min(findminima(a,l,m-1),findminima(a,m+1,r));
   if(m>l&&a[m]<a[m-1])
    return a[m];
   if(a[r]>a[m])
    return findminima(a,l,m-1);
   return findminima(a,m+1,r);
}
int main()
{
    int a[]= {2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2};
    int n=sizeof(a)/sizeof(int);
    cout<<findminima(a,0,n-1);
    return 0;
}
