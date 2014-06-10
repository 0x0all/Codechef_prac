#include<iostream>
#include<fstream>
#define ll long long
using namespace std;
ll a[1002][1002]={0};
ll left1=500;
ll down=502;
ll right1=502;
ll up=500;
ll num=1;
ll i,j;
int main()
{
    ofstream fout;
    fout.open("hello.txt");
    i=501;
    j=501;
    a[501][501]=1;
    while(num!=1002001)
    {
        while(j<right1&&num!=1002001)
            {
                a[i][++j]=++num;
            }
            if(num==1002001)
                break;
        while(i<down)
        {
            a[++i][j]=++num;
        }
        while(j>left1)
        {
            j--;
            a[i][j]=++num;
        }
        while(i>up)
        {
            i--;
            a[i][j]=++num;
        }
        right1++;
        down++;
        up--;
        left1--;
    }
    cout<<i<<" "<<j<<"\n";
    ll sum=0;
    for(i=1;i<1002;i++)
    {
        for(j=1;j<1002;j++)
        {
            fout<<a[i][j]<<" ";
            if(i==j||i+j==1001)
                sum+=a[i][j];
        }
        fout<<"\n";
    }
    cout<<sum;
}
