#include<iostream>
#include<string>
using namespace std;
int main()
{
    string ch;
    int t;
    cin>>t;
    while(t--)
    {
        int numofzeros=0;
        cin>>ch;
        for(int i=0;i<ch.length();i++)
        switch(ch[i])
        {
        case 'A':
        case 'D':
        case 'O':
        case 'Q':
        case 'P':
        case 'R':numofzeros++;break;
        case 'B':numofzeros+=2;break;
        }
        cout<<numofzeros<<"\n";
    }
}
