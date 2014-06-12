#include<iostream>
#define ll int
using namespace std;
int gcd(int a,int b)
{
    while(a%b!=0)
    {
        int temp=a%b;
        a=b;
        b=temp;
    }
    return b;
}
int main()
{
    int proda=1,prodb=1,i,j,k;
    for(int i=1;i<10;i++)
    {
        for(j=1;j<10;j++)
        {
            float ratioof=(float)i/j;
            for(k=1;k<10;k++)
            {
                float e=(float)(i*10+k)/(k*10+j);
                if(e==ratioof&&(i*10+k)%11!=0)
                {
                    proda*=(i*10+k);
                    prodb*=(k*10+j);
                }
            }
        }
    }
    prodb/=gcd(prodb,proda);
    cout<<prodb;
}
