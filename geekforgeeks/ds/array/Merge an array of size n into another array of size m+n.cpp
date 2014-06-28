#include<iostream>
using namespace std;
void mergeit(int* a,int* b,int m,int n)
{
    int i,j=m+n-1;
    for(i=m+n-1;i>=0;i--)
        if(a[i]!=-1)
        {
            a[j]=a[i];
            j--;
        }
    j++,i=0;
    int k=0;
    while(k<m+n)
    {
            if(i>=n||(a[j]<b[i]&&j<m+n))
                a[k++]=a[j++];
            else
                a[k++]=b[i++];
    }
}
int main()
{
    int a[]={2,3,-1,-1,6,7,-1,-1};
    int b[]={4,5,8,9};
    int n=sizeof(b)/sizeof(int);
    int m=sizeof(a)/sizeof(int)-n;
    mergeit(a,b,m,n);
    for(int i=0;i<m+n;i++)
        cout<<a[i]<<" ";
}
