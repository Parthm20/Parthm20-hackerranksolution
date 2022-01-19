#include<stdio.h>
int main()
{  int n,i;
    scanf("%d",&n);
    int arr[n];
    printf("enter element of array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        arr[i]=arr[i]+5;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
        
    }
    return 0;
}