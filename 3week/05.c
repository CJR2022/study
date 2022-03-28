#include <stdio.h>

int main()
{
	double weight, moon_weight;
	printf("지구 몸무게 ? : ");
	scanf_s("%lf", &weight);
	moon_weight = weight * 17/100;
	printf("달에서의 몸무게는 %lf", moon_weight);
	return 0;
}