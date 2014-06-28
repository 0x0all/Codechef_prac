//juggling algorithm
#include<iostream>
using namespace std;
int gcd(int a,int b)
{
   if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
void rotateit(int* a,int n,int d)
{
    int temp=gcd(d,n);
    for(int i=0;i<temp;i++)
    {
        int j=i,temp1=a[i];
        while(1)
        {
            int k=(j+d)%n;
            if(k==i)
                break;
            a[j]=a[k];
            j=k;
        }
        a[j]=temp1;
    }
}
void reverseit(int* a,int i,int j)
{
    while(i<j)
        swap(a[i++],a[j--]);
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6},i;
    int n=sizeof(a)/sizeof(int);
    reverseit(a,0,2);
    reverseit(a,3,n-1);
    reverseit(a,0,n-1);
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
}
