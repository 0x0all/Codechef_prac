#include<iostream>
#define ll long long
using namespace std;
int main()
{
    ll range=100;
    ll term1=3*range*range-range-2;
    term1=term1*range*(range+1)/12;
    cout<<term1;
}
