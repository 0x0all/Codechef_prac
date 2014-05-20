#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
vector<long> my;
long quicksort(long l,long r)
{
    long i=l-1;
    long j=l;
    while(j<r)
    {
        if(my[j]<my[r])
        {
            i++;
            swap(my[i],my[j]);
        }
        j++;
    }
    i++;
    swap(my[r],my[i]);
    return i;
}
void quick(long l,long r)
{
    if(l<r)
    {
        long q=quicksort(l,r);
        quick(l,q-1);
        quick(q+1,r);
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
    long len=my.size(),i;
    quick(0,len-1);
    for(i=0;i<len;i++)
        fout<<my[i]<<"\n";
    return 0;
}
