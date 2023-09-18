// 9.18 배열 평균, 합 구하기
//내 코드

#include<stdio.h>

int main() {
	
	float arr[5];
	float max = 0;

	for (int i = 0; i < 5; i++) {
		scanf_s("%f", &arr[i]);
	}

	for (int i = 0; i < 5; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	printf("최댓값은 : %.2f", max);
}

// 선생님 코드

int main() {

	double arr[5];
	float max = 0;

	for (int i = 0; i < 5; i++) {
		scanf_s("%lf", &arr[i]);
	}

	max = arr[0];
	for (int i = 0; i < 5; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	printf("최댓값은 : %lf", max);
}