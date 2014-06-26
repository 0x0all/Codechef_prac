#include<iostream>
using namespace std;
int main()
{
    int a[]={1, 2, 3, 2, 3, 1, 3};
    int n=sizeof(a)/sizeof(int);
    int res=a[0];
    for(int i=1;i<n;i++)
        res^=a[i];
    cout<<res;
}
