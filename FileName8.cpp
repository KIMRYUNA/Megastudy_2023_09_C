#include<stdio.h>

int main() {
	int b;
	int* pa;
	pa = &b;
	*pa = 1000;
	printf("b의 값은 %d\n", b);
	printf("b의 주소값은 %d\n", &b);
	printf("b의 주소값은 %d\n", pa);
	printf("b의 값은 %d\n", *pa);

}