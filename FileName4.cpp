#include<stdio.h>
int main() {

	int a = 10;
	int* pa;
	pa = &a;
	int** ppa;
	ppa = &pa;

	//*** 포인터 총 복습 
	printf("a의 값은 %d", a);//10
	printf("a의 주소값은 %d", &a);//&a

	printf("pa의 값은 %d", pa);//&a
	printf("pa의 주소값은 %d", &pa);//&pa

	printf("ppa의 값은 %d", ppa);//&pa
	printf("pa의 값 또는 a의 주소값은 %d", *ppa);//&a
	printf("a의 값은 %d", **ppa);//a의 값


