#include<stdio.h>
int main()
{
    int a1,a2,a,b;
    scanf("%d %d",&a1,&a2);
    a=a1%10;
    b=a2%10;
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