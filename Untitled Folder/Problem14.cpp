#include<iostream>
#include<map>
#define ll long long
using namespace std;
int main()
{
    ll terms=0,longest=0;
  for(ll i=1;i<1000000;i++)
  {
      ll j=i;
      ll thisterms=1;
      while(j!=1)
      {
          thisterms++;
          if(terms<thisterms)
          {
              terms=thisterms;
              longest=i;
          }
          if(j%2==0)
            j=j/2;
          else
            j=3*j+1;
      }
  }
  cout<<terms<<" "<<longest;
}
