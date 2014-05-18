#include<iostream>
#include<map>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long n;
        cin>>n;
        if(n<=360)
        {
            int l=360/n;
            if((float)l<(float)360/n)
                cout<<"n y ";
            else
                cout<<"y y ";
            float sum=(n*(n+1))/2;
            map<long,long> mymap;
            long i;
            for(i=1;i<=n;i++)
            {
                float j=(360*(i/sum));
                if(mymap[j]!=1)
                    mymap[j]=1;
                else
                    break;
            }
            if(i>n)
                cout<<"y\n";
            else
                cout<<"n\n";
        }
        else
        {
            cout<<"n n n\n";
        }
    }
    return 0;
}
