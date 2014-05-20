#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("test.txt");
    ofstream fout;
    fout.open("results_insertion.txt");
    long l,i;
    vector<long> my;
    while(!fin.eof())
    {
        fin>>l;
        my.push_back(l);
    }
    sort(my.begin(),my.end());
    long len=my.size();
    for(i=0;i<len;i++)
        fout<<my[i]<<"\n";
    return 0;
}
