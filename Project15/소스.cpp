#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{ 
	int bit;
	int x;
	int y; 

	do {
		printf("[1] ��Ʈ AND(&)\n");
		printf("[2] ��Ʈ OR(|)\n");
		printf("[3] ��Ʈ XOR(^)\n");
		printf("[4] ��Ʈ COMPLEMENT(~)\n");
		printf("[0] ����(stop)\n");
		printf("�� ���� �� �ϳ��� �����ϼ���. >>");
		scanf("%d", &bit);
		puts("");

		if (bit == 0) 
		{
			printf("�����մϴ�.\n");
			break;
		}

		if (bit == 1)
		{

			printf("��Ʈ �����ҵ� ���� �Է� >>");
			scanf("%d %d" , &x, &y);
			printf("x = ");
			for (int i = 31; i >= 0; i--)
			{
				printf("%c", ((x >> i) & 1) ? '1' : '0');
			}
			printf("   %d\n", x);
			puts("");
			puts("");
			puts("");
			printf("y = ");
			for (int j = 31; j >= 0; j--)
			{
				printf("%c", ((y >> j) & 1) ? '1' : '0');
			}
			printf("   %d\n", y);
			puts("");
			puts("");
			puts("");
			printf("x & y = ");
			int z = x & y;
			for (int k = 31; k >= 0; k--)
			{
				printf("%c", ((x & y >> k) & 1) ? '1' : '0');
			}
			printf("   %d\n", z);
			puts("");
			puts("");
			puts("");
		   
		}
		if (bit == 2)
		{
			printf("��Ʈ �����ҵ� ���� �Է� >>");
			scanf("%d %d", &x, &y);
			printf("x = ");
			for (int i = 31; i >= 0; i--)
			{
				printf("%c", ((x >> i) & 1) ? '1' : '0');
			}
			printf("   %d\n", x);
			puts("");
			puts("");
			puts("");
			printf("y = ");
			for (int j = 31; j >= 0; j--)
			{
				printf("%c", ((y >> j) & 1) ? '1' : '0');
			}
			printf("   %d\n", y);
			puts("");
			puts("");
			puts("");
			printf("x | y = ");
			int z = x | y;
			for (int k = 31; k >= 0; k--)
			{
				printf("%c", ((x | y >> k) & 1) ? '1' : '0');
			}
			printf("   %d\n", z);
			puts("");
			puts("");
			puts("");
			

		}if (bit == 3) 
		{
			printf("��Ʈ �����ҵ� ���� �Է� >>");
			scanf("%d %d", &x, &y);
			printf("x = ");
			for (int i = 31; i >= 0; i--)
			{
				printf("%c", ((x >> i) & 1) ? '1' : '0');
			}
			printf("   %d\n", x);
			puts("");
			puts("");
			puts("");
			printf("y = ");
			for (int j = 31; j >= 0; j--)
			{
				printf("%c", ((y >> j) & 1) ? '1' : '0');
			}
			printf("   %d\n", y);
			puts("");
			puts("");
			puts("");
			printf("x ^ y = ");
			int z = x ^ y;
			for (int k = 31; k >= 0; k--)
			{
				printf("%c", ((x ^ y >> k) & 1) ? '1' : '0');
			}
			printf("   %d\n", z);
			puts("");
			puts("");
			puts("");

		}if (bit == 4)
		{
			printf("��Ʈ ���� ������ �ϳ��� ���� �Է� >>");
			scanf("%d", &x);
			printf("x = ");
			for (int i = 31; i >= 0; i--)
			{
				printf("%c", ((x >> i) & 1) ? '1' : '0');
			}
			printf("   %d\n", x);
			puts("");
			puts("");
			puts("");
		
			printf("x = ");
			int z = ~x;
			for (int k = 31; k >= 0; k--)
			{
				printf("%c", ((z >> k) & 1) ? '1' : '0');
			}
			printf("   %d\n", z);
			puts("");
			puts("");
			puts("");


		}


	
		




	}






	while (1);

}