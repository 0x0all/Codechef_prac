#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("test.txt");
    ofstream fout;
    fout.open("results_insertion.txt");
    long l;
    vector<long> my;
    while(!fin.eof())
    {
        fin>>l;
        my.push_back(l);
    }
    long len=my.size(),i,j;
    for(i=1;i<len;i++)
    {
        j=i;
        int temp=my[i];
        while(j>0&&temp<my[j-1])
        {
            my[j]=my[j-1];
            j--;
        }
        my[j]=temp;
    }
    for(i=0;i<len;i++)
        fout<<my[i]<<"\n";
    return 0;
}
