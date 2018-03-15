#include<stdio.h>
void main() {
    int a=0,b=1,f,x,i;
    printf("enter the number");
    scanf("%d",&x);
    printf("%d\t%d\t",a,b);
    for(i=2;i<x;i++)
{     f=a+b;
       a=b;
       b=f;
       printf(" %d\t",f);
}
    
}
