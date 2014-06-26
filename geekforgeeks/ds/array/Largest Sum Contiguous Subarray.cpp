#include<iostream>
using namespace std;
//kadane's algo
void method1()
{
    int a[]={-2, -3, 4, -1, -2, 1, 5, -3};
    int n=sizeof(a)/sizeof(int);
    int max_ending_here=0;
    int max_so_far=0;
    for(int i=0;i<n;i++)
    {
        max_ending_here+=a[i];
        if(max_ending_here<0)
            max_ending_here=0;
        if(max_so_far<max_ending_here)
            max_so_far=max_ending_here;
    }
    cout<<max_so_far;
}
//method 2 dynamic approach
void method2()
{
    int a[]={-2, -3, 4, -1, -2, 1, 5, -3};
    int n=sizeof(a)/sizeof(int);
    int curr_max=0;
    int max_so_far=0;
    for(int i=0;i<n;i++)
    {
        curr_max=max(curr_max+a[i],a[i]);
        max_so_far=max(curr_max,max_so_far);
    }
    cout<<max_so_far;
}
int main()
{
    method2();
}
