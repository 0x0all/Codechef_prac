#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int a[n][n],b[n][n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<=i;j++)
            {
                cin>>a[i][j];
                if(i==n-1)
                    b[i][j]=a[i][j];
            }
        }
        for(i=n-2;i>=0;i--)
        {
            for(j=0;j<=i;j++)
            {
                b[i][j]=max(b[i+1][j],b[i+1][j+1])+a[i][j];
            }
        }
        cout<<b[0][0]<<"\n";
    }
    return 0;
}
