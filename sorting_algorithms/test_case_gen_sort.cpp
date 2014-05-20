#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
    srand(time(0));
    ofstream fout;
    fout.open("test.txt");
    long k=0;
    while(k<=100000)
    {
        fout<<rand()%100000<<"\n";
        k++;
    }
    return 0;
}
