#include<stdio.h>
using namespace std;
int main()
{
    int t,n,m,i,j;
    scanf("%d",&t);
    while(t--)
    {
        int arr[1001]={0},forchef=1;
        scanf("%d",&n);
        scanf("%d",&m);
        for(i=0;i<m;i++)
        {
            scanf("%d",&j);
            arr[j-1]=-1;
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                if(forchef)
                {
                    arr[i]=-1;
                    printf("%d ",i+1);
                    forchef=0;
                }
                else
                    forchef=1;
            }
        }
        printf("\n");
        for(i=0;i<n;i++)
            if(arr[i]==0)
                printf("%d ",i+1);
        printf("\n");
    }
    return 0;
}
