#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


 int  main(void)
{ 
	 int customer;
	 int menu;
	 int a;
	 int b;
	 int c;
	 int total;
	 int total2 = 0;
	 int d;
	 int money;

	 money = 100000;

	 printf("���� ������ �ִ� �ݾ� : 100000��\n");
	 printf("�������� �Դϴ�.\n");
	 printf("�� ���ΰ���? : ");
	 scanf("%d", &customer);
	 printf("%d���� ���̱���. \n", customer);
	 printf("�޴����� ���� �ֹ��Ͻ� �޴��� �������ּ���.\n");
	 printf("     �޴���     \n");
	 printf("1. ¥��� : 3000�� \n");
	 printf("2. ��¥�� : 4000�� \n");
	 printf("3. «   �� : 5000�� \n");
	 printf("4. «¥�� : 5000�� \n");
	 printf("5. ������ : 15000�� \n");
	 printf("6. ���꽽 : 30000�� \n");
	 printf("7. ����� : 2000�� \n");

	 for (a = 1; a <= customer; a++) {
		 total = 0;
		 printf("%d�� �մ� �ֹ��ްڽ��ϴ�. \n", a);
		 printf("��� �޴��� �ֹ��Ͻðڽ��ϱ�?");
		 scanf("%d", &menu);
		 printf("\n%d�� �մ� %d���� �޴� �ֹ��ްڽ��ϴ�. \n", a, menu);
		 printf("���Ͻô� �޴��� ��ȣ�� �Է����ֽʽÿ� . \n");
		 printf("�ֹ� ��Ҹ� ���ϽŴٸ� �޴� �̿��� ��ȣ�� �Է����ֽʽÿ�. \n");

		 for (b = 1; b <= menu; b++) {
			 d = 0;
			 printf("� �޴��� �ֹ��Ͻðڽ��ϱ�? \n");
			 scanf(" %d", &c);

			 if (c == 1) {
				 printf("¥����� �ֹ��ϼ̽��ϴ�. \n");
				 d = 3000;
			 }
			 else if (c == 2) {
				 printf("��¥���� �ֹ��ϼ̽��ϴ�. \n");
				 d = 4000;
			 }
			 else if (c == 3) {
				 printf("«  ���� �ֹ��ϼ̽��ϴ�. \n");
				 d = 5000;
			 }
			 else if (c == 4) {
				 printf("«¥���� �ֹ��ϼ̽��ϴ�. \n");
				 d = 5000;
			 }
			 else if (c == 5) {
				 printf("�������� �ֹ��ϼ̽��ϴ�. \n");
				 d = 15000;
			 }
			 else if (c == 6) {
				 printf("���꽽�� �ֹ��ϼ̽��ϴ�. \n");
				 d = 30000;
			 }
			 else if (c == 7) {
				 printf("������� �ֹ��ϼ̽��ϴ�. \n");
				 d = 2000;
			 }

			 total += d;
		 }
		 printf("%d�� �մ� �ֹ��Ͻ� ���� ���� ������ %d�� �Դϴ�.\n \n", a, total);
		 total2 += total;

	 }

	 printf("\n �ֹ����� ���İ��� ������ %d �� �Դϴ�. \n", total2);
	 printf(" ��� ���͵帮�ڽ��ϴ�. \n");
	 if (total2 <= money);

	 printf("%d�� ���� ���͵帮�ڽ��ϴ�. \n", total2);
	 printf("������ �Ϸ�Ǿ����ϴ�. ���� ���� �ݾ��� %d���Դϴ�.\n \n", money - total2);
	 if (total2 <= money);
	 printf("�����մϴ�.");
}