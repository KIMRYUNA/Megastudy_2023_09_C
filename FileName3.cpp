// ���� ������ : �������� �����͸� �ǹ�

#include<stdio.h>
int main() {
	int a = 5;
	int* pa;
	pa = &a;
	int** ppa;
	ppa = &pa;


	printf("%d\n", ppa); //&pa
	printf("%d\n", *ppa);//pa=&a
	printf("%d\n", **ppa);//a
}