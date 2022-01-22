#include<stdio.h>
void main ()
{
  int n, i;
  int sum = 0;
  printf ("enter number:");
  scanf ("%d", &n);
  for (i =1; i <= n; i++)
  {
      sum=sum+(i*i);
  }
   printf("sum of square of is :%d",sum);

}


