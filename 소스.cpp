#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {


	int a;
	int b;
	int c;
	int d;

	printf("�� ������ �Է����ּ���.: ");
	scanf("%d %d", &a, &b);

	if (a > b)
	{
		printf("%d�� %d�� ���� ��� �������� ���� %d, %d�̴�.", a, b, a / b, a % b);
	}
	else (b > a);
	{
		printf("%d�� %d�� ���� ��� �������� ���� %d, %d�̴�.", b, a, b / a, b % a);
	}



}