#include<stdio.h>
//teacher �ڵ�
int main() {
	int systemnumber = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int* pa;

	while (true) {

		printf("���α׷� : ��Ʈ����\n");
		printf("1.��Ʈ���� �ü� ���� �ϱ� \n");
		printf("2. �̴����� �ü� ���� �ϱ� \n");
		printf("3. �������� �ü� ���� �ϱ� \n");
		printf("4. �� �ü� ����  \n");
		printf("5. ���α׷� ����   \n");
		printf("�Է� : ");
		scanf_s("%d", &systemnumber);

		switch (systemnumber) {


		case 1:
			printf("��Ʈ���� �ü� ����: \n");
			pa = &a;
			scanf_s("%d", pa);

			printf("1. ��Ʈ���� �ü� :%d\n", a);
			break;

		case 2:
			printf("2. �̴����� �ü� ���� �ϱ�\n");
			pa = &b;
			scanf_s("%d", pa);
			printf("2. �̴����� �ü� :%d\n", b);
			break;


		case 3:
			printf("3. �������� �ü� ���� �ϱ�\n");
			pa = &c;
			scanf_s("%d", pa);
			printf("3. �������� �ü� :%d\n", c);
			break;

		case 4:
			printf("4. �� �ü� ����\n");
			pa = &a;
			printf("1.��Ʈ���� �ü� :%d\n", *pa);

			pa = &b;
			printf("2.�̴����� �ü� :%d\n", *pa);

			pa = &c;
			printf("3.�������� �ü� :%d\n", *pa);
			break;

		case 5:
			return 0;
		
		default:
			printf("�߸��Է�\n");
			break;


		}
	}
	return 0;
}