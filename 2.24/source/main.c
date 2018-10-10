#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x;
	printf("input x:");
	scanf_s("%d", &x);
	if (x % 2 == 0)
		printf("x is even\n");
	else
		printf("x is odd\n");
	system("pause");
}