#include<stdio.h>
int main()
{
    int n;
    int count=0;
    int fun(int );
    scanf("%d",&n);
    
    while(n>9)
    {
        count++;
        n=fun(n);
        
    }
    printf("%d",count);
    return 0;
}
int fun(int y)
{
    int r,m=1;
    while(y>0)
    {
        r=y%10;
        m=m*r;
        y=y/10;
        
    }
    return m;
    
}