//with memoization
#include<iostream>
using namespace std;
using namespace std;
int l[10][10]={-1};
int lcslength(char *a,char *b,int i,int j)
{
    if(l[i][j]==-1)
    {
        if(a[i]==NULL||b[j]==NULL)
            {
                cout<<"\n";
                return 0;
            }
        if(a[i]==b[j])
            l[i][j]=1+lcslength(a,b,i+1,j+1);
        else
            l[i][j]=max(lcslength(a,b,i,j+1),lcslength(a,b,i+1,j));
    }
    return l[i][j];
}
int main()
{
    char *ch1="shashank";
    char *ch2="knahsahs";
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
                l[i][j]=-1;
    cout<<lcslength(ch1,ch2,0,0)<<"\n";
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
                cout<<l[i][j]<<" ";
}
