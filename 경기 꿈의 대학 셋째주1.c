#include <stdio.h>

int main()
{
	// 마일을 미터로 변환 
	int m, meter;
	
	printf("마일을 입력하세요 : ");
	scanf("%d", &m);
	
	meter = m * 1609;
	
	printf("%d마일은 %d미터입니다.\n", m, meter);
}
