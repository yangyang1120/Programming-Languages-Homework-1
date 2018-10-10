#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x, y;
	printf("請輸入x、y:");
	scanf_s("%d%d", &x, &y);
	printf("x=%d、y=%d\n", x, y);
	if (x%y == 0)
		printf("x為y的倍數:是\n");
	else
		printf("x為y的倍數:否\n");
	system("pause");
}