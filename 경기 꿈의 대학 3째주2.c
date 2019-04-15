#include <stdio.h>

int main()
{
	// 삼각형의 넓이 구하기 
	int a, b, sum = 0;
	
	printf("밑변 : ");
	scanf("%d", &a);
	
	printf("높이 : ");
	scanf("%d", &b);
	
	sum = a * b / 2;
	
	printf("넓이 : %d", sum);
}
