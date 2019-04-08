#include <stdio.h>

int main()
{
	double x, y, sum;
	
	printf("첫 번째 실수 : ");
	scanf("%lf", &x);
	
	printf("두 번째 실수 : ");
	scanf("%lf", &y);
	
	sum = x + y;
	
	printf("두 수의 합 : %lf", sum);
}
