//only solving by method2 and method3
#include<iostream>
using namespace std;
int method2(int* a,int* b,int m1,int m2,int n1,int n2)
{
    if(m2-m1+1==2)
        return (max(a[m1],b[n1])+min(a[m2],b[n2]))/2;
    int mid1=(m1+m2)/2;
    int mid2=(n1+n2)/2;
    if(a[mid1]>b[mid2])
        return method2(a,b,m1,mid1,mid2,n2);
    else
        return method2(a,b,mid1,m2,n1,mid2);
}
int method3(int* a,int* b,int n,int left,int right)
{
    if(left>right)
        return method3(b,a,n,0,n-1);
    int i=(left+right)/2;
    int j=n-i-1;
    if(a[i]>b[j]&&(j==n-1||a[i]<b[j+1]))
    {
        if(i==0||a[i-1]<b[j])
            return (a[i]+b[j])/2;
        else
            return (a[i]+a[i-1])/2;
    }
    else if(a[i]>b[j]&&j!=n-1&&a[i]>b[j+1])
        return method3(a,b,n,left,i-1);
    else
        return method3(a,b,n,i+1,right);
}
int main()
{
        int a[]={1, 12, 15, 26, 38};
        int b[]={2, 13, 17, 30, 45};
        int m=sizeof(a)/sizeof(int);
        cout<<method2(a,b,0,m-1,0,m-1)<<"\n";
        cout<<method3(a,b,m,0,m-1);
}
