#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()

{
	int num;
	
	scanf("%d", &num);

	printf("%10d\n", num);
	printf("%010d\n", num);
	printf("%0+10\n", num);
	printf("%-10\n", num);
	printf("%10o\n", num);
	printf("%0#10o\n", num);
	printf("%10x\n", num);
	printf("%0#10x\n", num); 

	







}