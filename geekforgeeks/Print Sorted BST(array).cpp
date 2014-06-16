#include<iostream>
using namespace std;
void print(int* a,int start,int n)
{
    if(start>=n)
        return;
    print(a,start*2+1,n);
    cout<<a[start]<<" ";
    print(a,start*2+2,n);
}
int main()
{
        int a[]={20,8,22,4,12,21,23,1,5,10,14};
        int sizeofa=sizeof(a)/sizeof(int);
        print(a,0,sizeofa);
}
