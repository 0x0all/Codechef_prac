#include<iostream>
using namespace std;
int findmaxpath(int* arr1,int* arr2,int size1,int size2)
{
    int i=0,j=0,sum1=0,sum2=0;
    while(i<size1||j<size2)
    {
        if(arr1[i]<arr2[j])
            sum1+=arr1[i++];
        else if(arr2[j]<arr1[i])
            sum2+=arr2[j++];
        else
        {

            if(sum1>sum2)
                sum2=sum1;
            else
                sum1=sum2;
                sum1+=arr1[i++];
                sum2+=arr2[j++];
        }
    }
    return max(sum1,sum2);
}
int main()
{
    int ar1[]  = {2, 3, 7, 10, 12, 15, 30, 34 , 1000};
    int ar2[] =  {1, 5, 7, 8, 10, 15, 16, 19 , 1000};
    int size1=sizeof(ar1)/sizeof(int)-1;
    int size2=sizeof(ar2)/sizeof(int)-1;
    cout<<findmaxpath(ar1,ar2,size1,size2);
}
