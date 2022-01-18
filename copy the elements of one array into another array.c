#include<stdio.h>
int main()
{
    int n,i;
    int arr1[10],arr2[10];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr1[i]);
    for(i=0;i<n;i++)
    arr2[i]=arr1[i];
        for(int i=0;i<n;i++)
        printf("%d",arr1[i]);
            printf("\n");
            for(i=0;i<n;i++)
            printf("%d",arr2[i]);
}
