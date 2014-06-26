#include<iostream>
using namespace std;
//method1 sum approach
void method1()
{
    int a[]={1,2,3,6,4};
    int n=sizeof(a)/sizeof(int);
    int sum=((n+1)*(n+2))/2;
    for(int i=0;i<n;i++)
        sum-=a[i];
    cout<<sum;
}
//method2 xor approach
void method2()
{
    int a[]={1,3,2,6,4};
    int n=sizeof(a)/sizeof(int);
    int x1=a[0],x2=n+1^n;
    for(int i=1;i<n;i++)
        {
            x1^=a[i];
            x2^=i;
        }
        x1=x1^x2;
        cout<<x1;
}
int main()
{
    method2();
}
