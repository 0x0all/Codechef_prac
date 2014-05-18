#include<iostream>
using namespace std;
void findpeak(int *a,int l,int r,int n,int peak)
{
    int m=(l+r)/2;
    if((m==0||a[m]>a[m-1])&&(m==n||a[m]>a[m+1])&&peak!=a[m])
        {
            cout<<a[m];
            /*if(m>0)
            findpeak(a,0,m,m,a[m]);
            if(m<n)
            findpeak(a+m,0,n-m,n-m,a[m]);*/
        }
    else if(m<n&&a[m]<a[m+1])
        findpeak(a,m+1,r,n,peak);
    else if(m>0&&a[m]<a[m-1])
        findpeak(a,l,m-1,n,peak);
}
int main()
{
    int a[]={30, 10, 20, 15, 2, 23, 90, 67, 100};
    int n=sizeof(a)/sizeof(int);
    findpeak(a,0,n-1,n-1,-1);
}
