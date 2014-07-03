#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int t;
float p,s;
float b;
float v;
cin>>t;
while(t--)
{
	cin>>p>>s;
	b=(p-sqrt(pow(p,2)-(24*s)))/12;
	v=pow(b,2)*((p-(8*b))/4);
	cout<<v<<"\n";
}
return 0;
}
