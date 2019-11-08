#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int value;
	printf("0~360 사이의 값을 입력합니다. :");
	scanf_s("%d", &value, sizeof(int));

	if (value == 360 || value == 0) {
		printf("양의 X축 \n\n");
	}
	else if (value < 90) {
		printf("1사분면 \n\n");
	}
	else if (value == 90) {
		printf("양의 Y축 \n\n");
	}
	else if (value < 180) {
		printf("2사분면 \n\n");
	}
	else if (value == 180) {
		printf("음의 X축 \n\n");
	}
	else if (value < 270) {
		printf("3사분면 \n\n");
	}
	else if (value == 270) {
		printf("음의 Y축 \n\n");
	}
	else if (value > 270 && value < 360) {
		printf("4사분면 \n\n");
	}
	else {
		printf("범위에 벗어나는 값입니다. (오류)\n\n");
	}
}