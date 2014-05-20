#include<iostream>
#include<vector>
#include<fstream>
using namespace std;
vector<long> my;
void mergeit(long l,long q,long r)
{
    vector<long> a,b;
    long i,j,k;
    long len1=q-l+1,len2=r-q;
    for(i=l;i<=q;i++)
        a.push_back(my[i]);
    a.push_back(1000000);
    for(i=q+1;i<=r;i++)
        b.push_back(my[i]);
    b.push_back(1000000);
    i=j=0;
    k=l;
    while(i<len1||j<len2)
    {
       if(a[i]<b[j])
            my[k++]=a[i++];
       else
        my[k++]=b[j++];
    }
}
void mergesort(long l,long r)
{
    if(l<r)
    {
        long q=(l+r)/2;
        mergesort(l,q);
        mergesort(q+1,r);
        mergeit(l,q,r);
    }
}
int main()
{
    ifstream fin;
    fin.open("test.txt");
    ofstream fout;
    fout.open("results_insertion.txt");
    long l;
    while(!fin.eof())
    {
        fin>>l;
        my.push_back(l);
    }
    mergesort(0,my.size()-1);
    long i,len=my.size();
    for( i=0;i<len;i++)
        fout<<my[i]<<"\n";
    return 0;
}
