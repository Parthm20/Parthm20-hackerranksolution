#include<stdio.h>
void main ()
{

  int n, i, sum;
  printf ("ENTER NUMBER:");
  scanf ("%d", &n);
  i = 1;
  sum = 0;
  while (i <= n)
    {
      sum = sum + i;
      i++;
     
    }
   printf ("sum is %d", sum);

}

