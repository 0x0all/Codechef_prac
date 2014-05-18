#include<iostream>
using namespace std;
int main()
{
    int a[]={9,8,7,6,5,4,3,2,1,10,5};
    int n=sizeof(a)/sizeof(int);
    for(int i=1;i<n;i++)
    {
        int j=i;
        int temp=a[i];
        while(j>0&&a[j-1]>temp)
        {
            a[j]=a[j-1];
            j--;
        }
        a[j]=temp;
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

}
