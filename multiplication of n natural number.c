#include<stdio.h>
void main ()
{
  int n, i, mul = 1;
  printf ("enter number:\n");
  scanf ("%d", &n);
  for (i = 1; i <= n; i++)
    {
      mul = mul * i;

    }
  printf ("multiplication of n number is :%d", mul);
}

