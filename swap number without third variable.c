#include <stdio.h>
int main() {
  double a, b;
  printf("Enter a  and b : ");
  scanf("%lf %lf", &a,&b);
 

  a = a - b;   
  b = a + b;
  a = b - a;

   printf("After swapping  a = %.2lf b = %.2lf \n", a,b);
  

  return 0;
}

