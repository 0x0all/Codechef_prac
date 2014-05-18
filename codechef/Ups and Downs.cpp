#include<iostream>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long n,i;
        cin>>n;
        long a[n];
        cin>>a[0];
        for(i=1;i<n;i++)
        {
            cin>>a[i];
            if((i-1)%2==0&&a[i-1]>=a[i])
            {
                swap(a[i],a[i-1]);
            }
            else if((i-1)%2!=0&&a[i]>=a[i-1])
            {
               swap(a[i],a[i-1]);
            }
        }
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
