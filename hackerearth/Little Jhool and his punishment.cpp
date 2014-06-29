#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,b,g;
        cin>>n>>b>>g;
        n=b-g;
        if(n>1||n<-1)
            cout<<"Little Jhool wins!\n";
        else
            cout<<"The teacher wins!\n";
    }
    return 0;
}
