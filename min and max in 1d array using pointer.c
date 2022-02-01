#include<stdio.h>
int minmax(int a[],int len,int *min,int *max)
{
    *min=*max=a[0];
    for(int i=1;i<len;i++)
    {
    if(a[i]<*min)
      *min=a[i];
    if(a[i]>*max)
      *max=a[i];
    }
}
 int main()
 {
     int a[5];
     for(int i=0;i<5;i++)
     scanf("%d",&a[i]);
     int min,max;
     int len=sizeof(a)/sizeof(a[0]);
     minmax(a,len,&min,&max);
     printf(" minimum value is %d and maximum value is %d",min,max);
     return 0;
}