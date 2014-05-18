#include<iostream>
using namespace std;
void mergeit(int *a,int l,int q,int r)
{
    int len1=q-l+1,len2=r-q,i,j;
    int arr1[len1+1],arr2[len2+1];
    arr1[len1]=arr2[len2]=32768;
    for(i=0;i<len1;i++)
        {
            arr1[i]=a[l+i];
            cout<<arr1[i]<<" ";
        }
        cout<<"\n";
    for(i=0;i<len2;i++)
        {
            arr2[i]=a[q+1+i];
            cout<<arr2[i]<<" ";
        }
        cout<<"\n";
        i=0,j=0;
        int k=l;
        while(i<len1&&j<len2)
        {
            if(arr1[i]<arr2[j])
                a[k++]=arr1[i++];
            else
                a[k++]=arr2[j++];
        }
        while(i<len1)
            a[k++]=arr1[i++];
        while(j<len2)
            a[k++]=arr2[j++];
}
void mergesort(int *a,int l,int r)
{
    if(l<r)
    {
        int q=(l+r)/2;
        mergesort(a,l,q);
        mergesort(a,q+1,r);
        mergeit(a,l,q,r);
    }
}
int main()
{
    int a[]={0,9,8,7,6,5,4,3,2,1};
    int n=sizeof(a)/sizeof(int);
    mergesort(a,0,n-1);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
