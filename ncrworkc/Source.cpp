#include<stdio.h>
int add(int a,int b)
{
	return a + b;
}
int sub(int a,int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a*b;
}
int div(int a, int b)
{
	return a/b;
}

void main()
{
	int a, b;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	getchar();
	printf("Addition of two numbers : %d", add(a, b));
	printf("\n Subtraction of two numbers : %d", sub(a, b));
	printf("\n Multiplication of two numbers : %d", mul(a, b));
	printf("\n Division of two numbers : %d", div(a, b));
	getchar();
}