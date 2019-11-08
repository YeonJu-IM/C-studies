#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	double a;
	double b = 2.204623;

	printf("무게kg 입력: ");
	scanf("%lf", &a);

	printf("%.3f", a * b);

}
