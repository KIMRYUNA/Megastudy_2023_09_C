// ���� �迭�� ���� ���ְ�
// �Է��� ������ n������ �־��ְ�
// ���� n����ŭ �Է��ϰ�
// ���� ū ���� ���ϴ� ���α׷� �ۼ�

#include <stdio.h>
int main() {

	int arr[9999];
	int n;
	int max = 0;

	scanf_s("%d", &n);

	for(int i=0;i<n;i++) {
		scanf_s("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	printf("���� ū���� %d", max);

}



#include <stdio.h>
int main() {

	int k[1000];
	int input;
	printf("�Է� : ");
	scanf_s("%d", &input);

	for (int i = 0; i < input; i++) {
		scanf_s("%d", k[i]);
	}
	int max = k[0];

	for (int j = 0; j < input; j++) {
		if (max < k[j]) max = k[j];
	}

	printf("���� ū ���� %d����", max);

}
