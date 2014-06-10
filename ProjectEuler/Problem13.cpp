#include<iostream>
#include<map>
#include<string>
#include<fstream>
#define ll long long
using namespace std;
int main()
{
    ifstream fin;
    fin.open("demo.txt");
    char a[100][50];
    for(ll i=0;i<100;i++)
        fin>>a[i];
    char ch[50];
    ll carry=0;
    for(ll i=49;i>=0;i--)
    {
        ll sum=carry;
        for(ll j=0;j<100;j++)
        {
             sum+=(a[j][i]-48);
        }
        ll temp=sum%10;
        ch[i]=temp+48;
        carry=sum/10;
    }
    cout<<carry<<ch;
    return 0;
}
