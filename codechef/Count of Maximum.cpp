#include<stdio.h>
#include<map>
using namespace std;
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
            scanf("%d",&n);
            int arr[10001]={0};
            int countit,res=0,j;
            for(int i=0;i<n;i++)
            {
                scanf("%d",&j);
                arr[j]++;
                if(arr[j]>res)
                {
                    countit=j;
                    res=arr[j];
                }
                else if(arr[j]==res)
                {
                    countit=min(j,countit);
                }
            }
            printf("%d %d\n",countit,res);
    }
    return 0;
}
