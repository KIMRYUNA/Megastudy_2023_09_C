// 더블 포인터 : 포인터의 포인터를 의미

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