#include<iostream>
#include<vector>
#include<fstream>
using namespace std;
vector<long> my;
void maxheapify(long pos,long sizevec)
{
    if(2*pos>sizevec&&2*pos+1>sizevec)
        return;
    long maxnum=pos;
    if(2*pos<sizevec&&my[2*pos]>my[maxnum])
        maxnum=2*pos;
    if(2*pos+1<sizevec&&my[2*pos+1]>my[maxnum])
        maxnum=2*pos+1;
        if(maxnum!=pos)
        {
            swap(my[maxnum],my[pos]);
            maxheapify(maxnum,sizevec);
        }
}
void heapify()
{
    for(long i=my.size()/2;i>=0;i--)
        {
            maxheapify(i,my.size());
        }
}
void heapsort()
{
    long sizeheap=my.size();
    while(sizeheap>0)
    {
        swap(my[0],my[sizeheap-1]);
        sizeheap--;
        maxheapify(0,sizeheap);
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
    heapify();
    heapsort();
    for(i=0;i<len;i++)
        fout<<my[i]<<"\n";
    return 0;
}
