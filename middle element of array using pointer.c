#include<stdio.h>
int *findmid(int a[] , int n)

{
    return &a[n/2];
}

int main()
{
    int a[5];
     for(int i=0;i<5;i++)
     scanf("%d",&a[i]);
     int n=sizeof(a)/sizeof(a[0]);
     int *mid=findmid(a,n);
     printf("%d",*mid);
     return 0;
}