// 9.18 �迭 ���, �� ���ϱ�
//�� �ڵ�

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

	printf("�ִ��� : %.2f", max);
}

// ������ �ڵ�

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

	printf("�ִ��� : %lf", max);
}