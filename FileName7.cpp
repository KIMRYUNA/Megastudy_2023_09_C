#include<stdio.h>

int main() {
	//int a = 1;
	//int* pa;
	//pa = &a;
	//printf("%d\n", &a);//a�� �ּҰ�
	//printf("%d\n", pa);//a�� �ּڰ�
	//printf("%d\n", *pa);//f4�� ���� �ִ� �ּڰ��� ������ ������

	int a = 10;
	int* pa;
	pa = &a;
	printf("a�� ���� %d\n", a);
	printf("a�� �ּҰ��� %d\n", &a);
	printf("a�� �ּҰ��� %d\n", pa);
	printf("a�� ���� %d\n", *pa);
	
	
	*pa = 100;

	printf("a�� ���� %d\n", a);
	printf("a�� �ּҰ��� %d\n", &a);
	printf("a�� �ּҰ��� %d\n", pa);
	printf("a�� ���� %d\n ", *pa);




	int b;
	pa = &b;
	*pa = 1000;
	printf("b�� ���� %d\n", b);
	printf("b�� �ּҰ��� %d\n", &b);
	printf("b�� �ּҰ��� %d\n", pa);
	printf("b�� ���� %d\n", *pa);

}