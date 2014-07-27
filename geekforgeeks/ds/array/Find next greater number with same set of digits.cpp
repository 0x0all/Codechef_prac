#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    char a[]="1234";
    int n=strlen(a);
    int i=n-1;
    while(i>0)
        {if(a[i-1]<a[i])
            break;
            i--;
        }
    if(i==0)
        cout<<"NOT FOUND\n";
    else
    {
        int k=i;
        int smallest=i,temp=a[i-1];
        while(i<n)
        {
            if(a[smallest]>a[i]&&temp<a[i])
                smallest=i;
            i++;
        }
        swap(a[k-1],a[smallest]);
        sort(a+k,a+n);
        cout<<a;
    }
    return 0;
}
