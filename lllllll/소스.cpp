#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {


	int a;
	int b;
	int c;
	int d;

	printf("두 정수를 입력해주세요.: ");
	scanf("%d %d", &a, &b);

	if (a > b)
	{
		printf("%d를 %d로 나눈 몫과 나머지는 각각 %d, %d이다.", a, b, a / b, a % b);
	}
	else (b > a);
	{
		printf("%d를 %d로 나눈 몫과 나머지는 각각 %d, %d이다.", b, a, b / a, b % a);
	}



}