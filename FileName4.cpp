#include<stdio.h>
int main() {

	int a = 10;
	int* pa;
	pa = &a;
	int** ppa;
	ppa = &pa;

	//*** ������ �� ���� 
	printf("a�� ���� %d", a);//10
	printf("a�� �ּҰ��� %d", &a);//&a

	printf("pa�� ���� %d", pa);//&a
	printf("pa�� �ּҰ��� %d", &pa);//&pa

	printf("ppa�� ���� %d", ppa);//&pa
	printf("pa�� �� �Ǵ� a�� �ּҰ��� %d", *ppa);//&a
	printf("a�� ���� %d", **ppa);//a�� ��


