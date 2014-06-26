#include<iostream>
#include<map>
using namespace std;
//hash maps ds that stores the key in sorted order takes n time complexity
void method2()
{
     map<int,int> arraymy;
    int n=16;
    arraymy[1]=1;
    arraymy[4]=1;
    arraymy[45]=1;
    arraymy[6]=1;
    arraymy[10]=1;
    arraymy[8]=1;
    map<int,int>::iterator it;
    for(it=arraymy.begin();it!=arraymy.end();it++)
    {
        if(arraymy[n-it->first]==1)
        {
            cout<<it->first<<" "<<n-it->first;
            break;
        }
    }
}
//using sorting to solve this takes nlogn time complexity
int quicksort(int* a,int p,int r)
{
    int i=p-1;
    while(p<r)
    {
        if(a[p]>a[r])
        {
            i++;
            swap(a[p],a[i]);
        }
        p++;
    }
    i++;
    swap(a[i],a[r]);
    return i;
}
void partitionquick(int* a,int p,int r)
{
    if(p<r)
    {
        int q=quicksort(a,p,r);
        partitionquick(a,p,q-1);
        partitionquick(a,q+1,r);
    }
}
void method1()
{
    int a[] = {1, 4, 45, 6, 10, -8};
    int n=sizeof(a)/sizeof(int);
    int num=16;
    partitionquick(a,0,n-1);
    int i=0;
    n--;
    while(i<n)
    {
        if((a[i]+a[n])==num)
        {
            cout<<a[i]<<" "<<a[n];
            break;
        }
        else if(num < a[i]+a[n])
            i++;
        else
            n--;
    }
}
int main()
{
    method2();
}
