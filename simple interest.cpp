/*calculation of simple interest*/
#include<stdio.h>
int main()
{
	int p,n;
	float r,si;
	p = 100;
	n = 3;
	r = 90;
	si = p*n*r/100;
	printf("%f\n",si);
	return 0;
}