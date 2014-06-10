#include<iostream>
#define ll long long
using namespace std;
ll a[21][21];
int main()
{
    ll i,j;
    for(i=0;i<21;i++)
        {
            a[i][20]=1;
            a[20][i]=1;
        }
        a[20][20]=0;
        for(i=19;i>=0;i--)
        {
            for(j=19;j>=0;j--)
            {
                a[i][j]=a[i+1][j]+a[i][j+1];
            }
        }
        cout<<a[0][0];
}
