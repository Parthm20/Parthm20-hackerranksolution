#include<stdio.h>
int main()
{
    int b,n,m,i,j,k[1000],d[1000],no=-1,result =0;
    scanf("%d%d%d",&b,&n,&m);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&k[i]);
    }
    
    for(j=0;j<m;j++)
    {
        scanf("%d",&d[j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            result=k[i]+d[j];
            
            if(result>no&&result<=b)
            {
                no=result;
            }
        }
    }
    
    printf("%d",no);
}