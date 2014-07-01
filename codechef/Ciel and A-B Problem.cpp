#include<stdio.h>
#define ll long long
using namespace std;
int main()
{
    ll a,b;
    scanf("%lld",&a);
    scanf("%lld",&b);
    a=a-b;
    if(a%10==9)
        a--;
    else
        a++;
    printf("%lld",a);
    return 0;
}
