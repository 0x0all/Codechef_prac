#include<iostream>
#include<algorithm>
using namespace std;
long res;
void combinationUtil(long  arr[], long  data[], long  start, long  end, long  index, long  r);
void Combination(long  arr[], long  n, long  r)
{
    long  data[r];
    combinationUtil(arr, data, 0, n-1, 0, r);
}
void combinationUtil(long  arr[], long  data[], long  start, long  end, long  index, long  r)
{
    if (index == r)
    {
       long a=data[0];
       for(long i=1;i<r;i++)
           if(a>data[i])
            a=data[i];
           res+=a;
       return;
    }
    for (long  i=start; i<=end && end-i+1 >= r-index; i++)
    {
        data[index] = arr[i];
        combinationUtil(arr, data, i+1, end, index+1, r);
    }
}

int main()
{

    long t;
    cin>>t;
    while(t--)
    {
        long n,k;
        cin>>n>>k;
        long arr[n];
        res=0;
        for(long i=0;i<n;i++)
            cin>>arr[i];
        Combination(arr, n, k);
        cout<<res<<"\n";
    }
}
