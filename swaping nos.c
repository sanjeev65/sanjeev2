#include<conio.h>
void main()
{
  int i,b,c;
  printf("enter the values of i and b \t:");
  scanf("%d%d",&i,&b);
  printf(" the before swaping numbers %d\t%d\n",i,b);
  c=i;
  i=b;
  b=c;
  printf("the after swaping numbers are %d\t%d\n",i,b);
}
