#include <stdio.h>
int main()
{
	int a, b, c;
	//input two numbers
	printf("enter the first number: ");
	scanf("%d", &a);
	printf("enter the second number");
	scanf("%d", &b);
	//swap the values
	c = a;
	a = b;
	b = c;
	//display the result
	printf("after swapping:\n");
	printf("first number: %d\n", a);
	printf("second number: %d\n", b);
	return 0;
}