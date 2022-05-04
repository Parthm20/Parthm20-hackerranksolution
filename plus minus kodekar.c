#include<stdio.h>
int main()
{
    int n,i,arr[1000];
    scanf("%d",&n);
    int pos=0,neg=0,zero=0;
    float p,ne,z;
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(i=0;i<n;i++)
   {
      if(arr[i]>0)
      {
          pos++;
      }
      else if(arr[i]<0)
      {
          neg++;
      }
      else
      {
          zero++;
      }
   }
  // printf("%d  %d  %d",pos,neg,zero);
    p=(float)pos/n;
    ne=(float)neg/n;
    z=(float)zero/n;
    printf("%.6f\n%.6f\n%.6f\n",p,ne,z);
    
    
}