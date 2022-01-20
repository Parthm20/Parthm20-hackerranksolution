#include<stdio.h>
int a1(int n)
{   
   return (n%10);
}  
int a2(int n)
 {
         return(n%10);
 }
int main()
    {
        int amount1,amount2,a,b;
      
        scanf("%d %d",&amount1,&amount2);
        int a1(int);
        int a2(int);
       a= a1(amount1);
        b=a2(amount2);
        if(a==b)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
        return 0;
        
    }
    

