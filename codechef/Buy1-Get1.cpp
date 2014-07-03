#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int i,temp=0;
        map<char,int> store;
        map<char,int>::iterator it;
        cin>>s;
        for(i=0;i<s.length();i++)
            store[s[i]]++;
        for(it=store.begin();it!=store.end();it++)
            if(it->second&1)
                temp+=((it->second+1)/2);
            else
                temp+=it->second/2;
        cout<<temp<<"\n";
    }
    return 0;
}
