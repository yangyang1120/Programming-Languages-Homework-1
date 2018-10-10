#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x, y, z;
	printf("please input three numbers:");
	scanf_s("%d%d%d", &x, &y, &z);
	if (y > z) {
		if (x > y)
			printf("max:%d\nmin:%d\n", x, z);
		else {
			if (x > z)
				printf("max:%d\nmin:%d\n", y, z);
			else
				printf("max:%d\nmin:%d\n", y, x);
		}
	}
	else {
		if (x > z)
			printf("max:%d\nmin:%d\n", x, y);
		else {
			if (y > x)
				printf("max:%d\nmin:%d\n", z, x);
			else
				printf("max:%d\nmin:%d\n", z, y);
		}
	}
	system("pause");
}