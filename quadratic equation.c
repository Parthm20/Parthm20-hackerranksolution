


#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float a,b,c,root1,root2,d;
    scanf("%f %f %f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d==0)
    {
        root1=-b/(2*a);   // inpt=a=1,b=2,c=1 
        root2=-b/(2*a);  //output= r1=-1,r2=-1
        printf("%f %f",root1,root2);
    }
    else if(d>0) 
    {
        root1= (-b - sqrt(d)) /(2*a);     //input : a,b,c=  1 4 3
      root2= (-b + sqrt(d)) /(2*a) ;      //output:    r1 = -1 r2 = -3
        printf("%f %f", root1, root2);
    }
        else   
        printf(" roots are imaginary");     // a,b,c=1,1,4
    

    


}
