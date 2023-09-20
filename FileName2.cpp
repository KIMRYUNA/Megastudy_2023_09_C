#include<stdio.h>
int main() {
	int a;
	int b;
	printf("정수 a의 값을 입력하세요 ");
	scanf_s("%d", &a);
	printf("정수 b의 값을 입력하세요 ");
	scanf_s("%d", &b);

	int* pa;//포인터 선언

	pa = &b;
	printf("바뀐 a의 값은 %d ", *pa);

	pa = &a;
	printf("바뀐 b의 값은 %d ", *pa);

	//*pa가 값
	//&pa가 주솟값
}