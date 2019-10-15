
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()

{
	int a;

	printf("네 자리 정수를 입력하세요:");

	scanf("%d", &a);

	printf("%10d\n", a);
	printf("%010d\n", a);
	printf("%+010d\n", a);
	printf("%-10d\n", a);
	printf("%10o\n", a);
	printf("%0#10o\n", a);
	printf("%10x\n", a);
	printf("%0#10x\n", a);








}