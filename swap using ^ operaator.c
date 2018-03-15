#include<conio.h>
void main()
{
  int x,y;
  printf("enter the values of a and b \t:");
  scanf("%d%d",&x,&y);
  printf(" the before swaping numbers %d\t%d\n",x,y);
 x=x^y;
 y=x^y;
 x=x^y;

  printf("the after swaping numbers are %d\t%d\n",x,y);
}
