#include <stdio.h>

int main()
{
	double weight, moon_weight;
	printf("���� ������ ? : ");
	scanf_s("%lf", &weight);
	moon_weight = weight * 17/100;
	printf("�޿����� �����Դ� %lf", moon_weight);
	return 0;
}