#include<stdio.h>

int main() {
	//int a = 1;
	//int* pa;
	//pa = &a;
	//printf("%d\n", &a);//a의 주소값
	//printf("%d\n", pa);//a의 주솟값
	//printf("%d\n", *pa);//f4를 갖고 있는 주솟값의 실제값 누구니

	int a = 10;
	int* pa;
	pa = &a;
	printf("a의 값은 %d\n", a);
	printf("a의 주소값은 %d\n", &a);
	printf("a의 주소값은 %d\n", pa);
	printf("a의 값은 %d\n", *pa);
	
	
	*pa = 100;

	printf("a의 값은 %d\n", a);
	printf("a의 주소값은 %d\n", &a);
	printf("a의 주소값은 %d\n", pa);
	printf("a의 값은 %d\n ", *pa);




	int b;
	pa = &b;
	*pa = 1000;
	printf("b의 값은 %d\n", b);
	printf("b의 주소값은 %d\n", &b);
	printf("b의 주소값은 %d\n", pa);
	printf("b의 값은 %d\n", *pa);

}