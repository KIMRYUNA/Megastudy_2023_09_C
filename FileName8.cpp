#include<stdio.h>

int main() {
	int b;
	int* pa;
	pa = &b;
	*pa = 1000;
	printf("b�� ���� %d\n", b);
	printf("b�� �ּҰ��� %d\n", &b);
	printf("b�� �ּҰ��� %d\n", pa);
	printf("b�� ���� %d\n", *pa);

}