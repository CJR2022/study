#include <stdio.h>

int main()
{
	float var, m;
	printf("연봉을 입력하시오(단위 : 만원) : ");
	scanf_s("%f", &var);
	m = var / 12;
	printf("월수령액(단위 : 만원) : %.2f", m);
	return 0;
}