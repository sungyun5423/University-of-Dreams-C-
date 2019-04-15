#include <stdio.h>

int main()
{
	// 원의 지름 구하기
	double a, sum;
	
	printf("반지름 입력 : ");
	scanf("%lf", &a);
	
	sum = a * a * 3.14;
	
	printf("지름 : %f", sum);
}
