#include<iostream>
using namespace std;
long res;
long a[101][101];
void rec(long i,long j,long isize,long jsize,long r)
{
    if(i>isize||j>jsize)
    return;
    else
    {
        if(r>res)
        res=r;
        if(i+1<=isize&&a[i][j]<a[i+1][j])
            rec(i+1,j,isize,jsize,r+1);
        if(j+1<=jsize&&a[i][j]<a[i][j+1])
            rec(i,j+1,isize,jsize,r+1);
    }
}

int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long n,m;
        cin>>n>>m;
        res=1;
        long i,j;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                cin>>a[i][j];
            }
        }
        rec(1,1,n,m,res);
        cout<<res<<"\n";
    }
    return 0;
}
