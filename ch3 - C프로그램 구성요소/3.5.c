#include <stdio.h>
int pro7()
{
	double x, result;
	printf("실수를 입력하시오: ");
	scanf_s("%lf", &x);
	result = 3 * x * x + 7 * x + 11;
	printf("다항식의 값은 %lf입니다.\n", result);

	return 0;
}