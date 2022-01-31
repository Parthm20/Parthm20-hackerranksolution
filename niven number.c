#include<stdio.h>
void main()
{
    int num,digit;
    int sum=0;
    int temp;
    printf("enter number");
    scanf("%d",&num);
    temp=num;
   
    
    while(num>0)
    {
        digit=num%10;
        sum=sum+digit;
        num = num/10;
    }
     
    if (temp%sum==0)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    
}
