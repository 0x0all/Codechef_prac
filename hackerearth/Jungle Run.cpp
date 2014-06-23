#include<iostream>
using namespace std;
char ch[32][32];
int a[32][32];
int n;
int starti,startj,endi,endj;
int mini=32768;
void cal(int i,int j)
{
    if(i<0||j<0||i>=n||j>=n||ch[i][j]=='T')
        return;
    if(i<n-1&&ch[i+1][j]!='T'&&a[i+1][j]>a[i][j]+1)
    {
        a[i+1][j]=a[i][j]+1;
        cal(i+1,j);
    }
     if(i>0&&ch[i-1][j]!='T'&&a[i-1][j]>a[i][j]+1)
    {
        a[i-1][j]=a[i][j]+1;
        cal(i-1,j);
    }
      if(j>0&&ch[i][j-1]!='T'&&a[i][j-1]>a[i][j]+1)
    {
        a[i][j-1]=a[i][j]+1;
        cal(i,j-1);
    }
     if(j<n-1&&ch[i][j+1]!='T'&&a[i][j+1]>a[i][j]+1)
    {
        a[i][j+1]=a[i][j]+1;
        cal(i,j+1);
    }
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
    {
        cin>>ch[i][j];
        a[i][j]=32768;
        if(ch[i][j]=='S')
        {
            starti=i;
            startj=j;
        }
        if(ch[i][j]=='E')
        {
            endi=i;
            endj=j;
        }
    }
    a[endi][endj]=0;
    cal(endi,endj);
    cout<<a[starti][startj];
    return 0;

}
