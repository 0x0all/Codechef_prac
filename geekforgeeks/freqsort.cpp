#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
    int a[]={5, 13, 6, 5, 13, 7, 8, 6, 5};
    map< int ,vector<int> > index;
    map<int,int> countof;
    int n=sizeof(a)/sizeof(int),i,j;
    for(i=0;i<n;i++)
        countof[a[i]]++;
    for(i=0;i<n;i++)
    {
        if(countof[a[i]]!=0)
        {
            index[countof[a[i]]].push_back(a[i]);
            countof[a[i]]=0;
        }
    }
   map< int ,vector<int> >::reverse_iterator it;
   int k=0;
   for(it=index.rbegin();it!=index.rend();it++)
   {
       for(i=0;i<it->second.size();i++)
       {
           for(j=0;j<it->first;j++)
            a[k++]=it->second[i];
       }
   }
   for(i=0;i<n;i++)
    cout<<a[i]<<" ";
return 0;
}
