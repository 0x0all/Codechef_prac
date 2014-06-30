#include<iostream>
#include<string>
using namespace std;
int main()
{
 int t;
 cin>>t;
    while(t--)
    {
      string s,stackof;
      cin>>s;
      int top=-1;
      for(int i=0;i<s.length();i++)
      {
          if(s[i]=='(')
                continue;
          else if(s[i]==')')
            cout<<stackof[top--];
          else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^')
            stackof[++top]=s[i];
          else
            cout<<s[i];
      }
      cout<<"\n";
    }
    return 0;
}
