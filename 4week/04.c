#include <stdio.h>
#define CONVERSION 3.3058

int main()
{
	double a, m;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%lf", &a);
	m = a * CONVERSION;
	printf("%lf������ �Դϴ�.", m);
	return 0;
}