#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int intpow(int a, int b);

int main()
{
	int m, n;
	printf("두 개의 정수를 입력하시오: ");
	scanf("%d%d", &m, &n);
	printf("함수의 결과는 %d입니다.\n", intpow(m, n));
	return 0;


}
int intpow(int a, int b)
{
	int mn = 0;
	mn = a * b;

	return mn;
}