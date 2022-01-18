#include <stdio.h>

int calculate_the_maximum(int n, int k)  
{ 
   int i,j, and=0,or=0,xor=0;
   for(i=1;i<=n;i++)
   {
    for( j=i+1;j<=n;j++)
     {
          
       if((i&j) > and &&(i&j) < k){
         and = i&j;
       }
       if( (i|j) > or && (i|j) < k) {
         or = i|j;
       }
       if( (i^j) > xor && (i^j) < k){
         xor = i^j;
       }
     }
   } 
    printf("%d\n",and);
    printf("%d\n",or);
 printf("%d\n",xor);
}


int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
   
    return 0;
}

