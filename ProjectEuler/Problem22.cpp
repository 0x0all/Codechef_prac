#include<iostream>
#include<map>
#include<fstream>
#include<string>
#define ll long long
using namespace std;
int main()
{
    ifstream fin;
    fin.open("hello.txt");
    string s;
    map<string,ll> mymap;
    while(!fin.eof())
    {
        fin>>s;
        mymap[s]=0;
    }
    map<string,ll>::iterator it;
    ll i=1;
    ll mainsum=0;
    for(it=mymap.begin();it!=mymap.end();it++)
       {
           ll sum=0;
           cout<<it->first<<"\n";
           for(ll j=0;j<it->first.length();j++)
           {
               sum+=(it->first[j]-64);
           }
           mainsum+=(sum*i);
           i++;
       }
       cout<<mainsum;
}
