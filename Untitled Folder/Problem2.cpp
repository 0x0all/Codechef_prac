#include<iostream>
using namespace std;
int main()
{
    long long range=40000000000;
    long long a=1,b=2,sum=2;
    while(b<range)
    {
        long long temp=b;
        b=a+b;
        a=temp;
        a=a+b;
        b=a+b;
        if(b<range)
        sum+=b;
        cout<<b<<"\n";
    }
    cout<<"result:"<<sum;
}
