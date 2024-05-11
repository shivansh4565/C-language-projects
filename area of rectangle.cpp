#include<stdio.h>
int main()
{
 int l,b,area;
 printf("enter the length of the rectangle: ");
 scanf("%lf", &l);
  printf("enter the bredath of the rectangle: ");
 scanf("%lf", &b);
 area = l*b;
 printf("the area of the rectangle is %.2lf",l,b);
 return 0;
}