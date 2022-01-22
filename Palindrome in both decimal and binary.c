#include<stdio.h>
int palindrome (int n)
{
  int temp = n;
  int sum = 0;
  while (n > 0)
    {
      int r = n % 10;
      sum = (sum * 10) + r;
      n = n / 10;
    }
  if (temp == sum)
    return 1;
  else
    return 0;
}

int dectobin (int num)
{
  int binary = 0;
  int temp = 1;
  while (num != 0)
    {
      int r = num % 2;
      num = num / 2;
      binary = binary + r * temp;
      temp = temp * 10;
    }
  return 1;
}

int main ()
{
  int n;
  scanf ("%d", &n);
  int pal = palindrome (n);
 int b=dectobin(n);
 
  if (pal == b)
    {
    printf("Yes");
    }
  else {
      printf("No");
  }
 

}
