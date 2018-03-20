
#include <stdio.h>
#include<string.h>
void main() 
{
	char x[100];
	int i,c=1;
	printf("enter the string:");
	gets(x);
	for(i=0;x[i]!='\0';i++)
    {
        if(x[i]==' ')
        {
    c++;
        }
    }printf("%d",c);
    

	
}
