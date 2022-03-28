#include <stdio.h>
#define CONVERSION 3.3058

int main()
{
	double a, m;
	printf("평을 입력하세요 : ");
	scanf_s("%lf", &a);
	m = a * CONVERSION;
	printf("%lf평방미터 입니다.", m);
	return 0;
}