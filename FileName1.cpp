#include <stdio.h>
int main() {
	
	// 문제 : 사용자로부터 정수10개를 입력받고 이를 배열에 저장한 후 입력받은 정수중에서
	//짝수와 홀수를 출력하시오.
	
	//1. 사용자로부터 정수 10개 입력받기[배열선언,scanf_s)
	int num[10];
	printf("정수를 10번 입력하세요: ");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
	}

	//2. 홀수 or 짝수 판별 [for,조건문{if, switch}]
	printf("짝수 리스트");
	for (int i = 0; i < 10; i++) {
		if (num[i] % 2 == 0) {
			printf("%d", num[i]);
		}
	}

	printf("홀수 리스트");
	for (int i = 0; i < 10; i++) {
		if (num[i] % 2 == 0) {
			printf("%d", num[i]);
		}
	}




	//(내 코드)
	int arr[9999];
	printf("정수 10개를 입력하시오.\n");
	for (int i = 0; i < 9; i++) {
		scanf_s("%d\n", &arr[i]);
	}
	printf(" 짝수는\n");
	for (int i = 0; i < 9; i++) {
		if (arr[i] % 2 == 0) {
			printf("%d ", arr[i]);
		}
	}
	printf(" 홀수는\n");
	for (int i = 0; i < 9; i++) {
		if (arr[i] % 2 != 0) {
			printf("%d ", arr[i]);
		}
	}
}
