#include<stdio.h>
#include<string>
#include<iostream>
#include<map>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string ch;
        char c,p;
        long n,i;
        cin>>n;
        i=n;
        map<char,char> change;
        while(i--)
        {
            cin>>c>>p;
            change[c]=p;
        }
        cin>>ch;
        long len=ch.length(),period=-1;
        for(i=0;i<len;i++)
        {
            if(change[ch[i]]!=NULL)
            ch[i]=change[ch[i]];
            if(ch[i]=='.')
                period=i;
        }
        if(period!=-1)
        {
            long j=len-1;
            while(j>period&&ch[j]=='0')
                j--;
            if(j==period)
                ch[j]=NULL;
            else
                ch[j+1]=NULL;
        }
        len=ch.length();
        i=0;
        while(i<len&&ch[i]=='0')
            i++;
        ch=&ch[i];
        if(ch[0]==NULL)
            ch="0";
        cout<<ch<<"\n";
    }
    return 0;
}
