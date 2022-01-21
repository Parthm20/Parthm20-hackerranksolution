#include<stdio.h>
int main()
{
    int n,div=0;
    printf("ENRER NUMBER:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            div++;
        }
    }
    if(div==2)
    {
        printf("%d IS A PRIME NUMBER",n);
    }
    else
    {
        printf("%d IS NOT A PRIME NUMBER",n);
    }
}
