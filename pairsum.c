#include<stdio.h>
#include<stdlib.h>

void findpair(int arr[], int n, int sum);
int main()
{
    int n,sum,j;
    int arr[n];
    int i;
    n = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   scanf("%d",&sum);
   findpair(arr,n,sum);
   return 0;
}
void findpair(int arr[],int n, int sum)
{
     for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                printf("Pair found (%d %d)",arr[i],arr[j]);
            }
        }  
            
    }
    printf("Pair not found");
}