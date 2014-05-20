#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<map>
#include<math.h>
using namespace std;
map<string,int> getwordfreq(char *ch)
{
    ifstream fin;
    fin.open(ch);
    string l;
    fin>>l;
    map<string,int> filevector1;
    while(!fin.eof())
    {
        filevector1[l]++;
        fin>>l;
    }
    return filevector1;

}
int innner_product(map<string,int> l1,map<string,int> l2)
{
    map<string,int>::iterator it1,it2;
    int sum=0;
    for(it1=l1.begin();it1!=l1.end();it1++)
    {
        for(it2=l2.begin();it2!=l2.end();it2++)
        {
            if(it1->first==it2->first)
            {
                sum+=(it1->second*it2->second);
            }
        }
    }
   return sum;
}
float angle(map<string,int> l1,map<string,int> l2)
{
    float num=innner_product(l1,l2);
    float dem=sqrt(innner_product(l1,l1)*innner_product(l2,l2));
    return acos(num/dem);
}
int main()
{
    char ch[]="Substrings and Repetitions.cpp";
    map<string,int> filevector1=getwordfreq("geekforgeeks.txt");
    map<string,int> filevector2=getwordfreq("notes_geekforgeeks.txt");
    cout<<angle(filevector1,filevector2)*((180*7)/22);
}
