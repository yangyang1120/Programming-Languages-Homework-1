#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x, y;
	printf("�п�Jx�By:");
	scanf_s("%d%d", &x, &y);
	printf("x=%d�By=%d\n", x, y);
	if (x%y == 0)
		printf("x��y������:�O\n");
	else
		printf("x��y������:�_\n");
	system("pause");
}