#include<iostream>
using namespace std;
int findfixed(int *a,int l,int r)
{
    if(r>l)
    {
        int m=l+(r-l)/2;
        if(a[m]==m)
            return m;
        if(m>a[m])
            return findfixed(a,m+1,r);
        else
        return findfixed(a,l,m-1);
    }
    return -1;
}
int main()
{
    int a[]={9,1,2,4,57};
    int n=sizeof(a)/sizeof(int);
    cout<<findfixed(a,0,n-1);
    return 0;
}
