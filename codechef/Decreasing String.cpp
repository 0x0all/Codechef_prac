#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s="abcdefghijklmnopqrstuvwxyz";
    string reverseof=s;
    reverse(reverseof.begin(),reverseof.end());
    while(t--)
    {
        int k;
        cin>>k;
        int x=k/25,y=k%25;
        if(y)
        while(y>=0)
            cout<<s[y--];
        while(x--)
            cout<<reverseof;
        cout<<"\n";
    }
    return 0;
}
