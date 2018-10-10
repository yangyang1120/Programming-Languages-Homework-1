#include<stdio.h>
#include<stdlib.h>

int main()
{
	float h, w,BMI;
	printf("input your height:");
	scanf_s("%f", &h);
	printf("input your weight:");
	scanf_s("%f", &w);
	h = h / 100;
	BMI = w/( h * h);
	printf("BMI=%.1f\n", BMI);
	if (BMI < 18.5)
		printf("Underweight\n");
	else if (18.5 <= BMI&& BMI < 24.9)
		printf("Normal\n");
	else if (24.9 <= BMI && BMI <= 29.9)
		printf("Overwight\n");
	else
		printf("Obese\n");
	printf("\nBMI VALUES\nUnderweight:less than 18.5\nNormal:between18.5 and 24.9\nOverwight:between24.9 and 29.9\nObese: 30 or greater\n");
	system("pause");
}
	
