#include<iostream>
#include<fstream>
#define ll long long
using namespace std;
ll a[100][100]={0},b[100][100]={0};
ll traverse(ll i,ll j)
{
    if(i<0||j<0||j>i)
        return 0;

    if(b[i][j]!=0)
        return b[i][j];
    ll sum1=a[i][j]+traverse(i-1,j);
    ll sum2=a[i][j]+traverse(i-1,j-1);
    b[i][j]=max(sum1,sum2);
    return(max(sum1,sum2));
}
int main()
{
    ifstream fin;
    fin.open("triangle.txt");
    ll i,j;
    ll sum=0;
    for(ll i=0;i<100;i++)
        for(j=0;j<=i;j++)
            fin>>a[i][j];
    for(i=0;i<100;i++)
    {
        ll temp=traverse(99,i);
        sum=max(sum,temp);
        cout<<temp<<"\n";
    }
    cout<<sum;
    return 0;
}
