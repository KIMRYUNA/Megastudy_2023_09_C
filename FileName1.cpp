#include <stdio.h>
int main() {
	
	// ���� : ����ڷκ��� ����10���� �Է¹ް� �̸� �迭�� ������ �� �Է¹��� �����߿���
	//¦���� Ȧ���� ����Ͻÿ�.
	
	//1. ����ڷκ��� ���� 10�� �Է¹ޱ�[�迭����,scanf_s)
	int num[10];
	printf("������ 10�� �Է��ϼ���: ");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
	}

	//2. Ȧ�� or ¦�� �Ǻ� [for,���ǹ�{if, switch}]
	printf("¦�� ����Ʈ");
	for (int i = 0; i < 10; i++) {
		if (num[i] % 2 == 0) {
			printf("%d", num[i]);
		}
	}

	printf("Ȧ�� ����Ʈ");
	for (int i = 0; i < 10; i++) {
		if (num[i] % 2 == 0) {
			printf("%d", num[i]);
		}
	}




	//(�� �ڵ�)
	int arr[9999];
	printf("���� 10���� �Է��Ͻÿ�.\n");
	for (int i = 0; i < 9; i++) {
		scanf_s("%d\n", &arr[i]);
	}
	printf(" ¦����\n");
	for (int i = 0; i < 9; i++) {
		if (arr[i] % 2 == 0) {
			printf("%d ", arr[i]);
		}
	}
	printf(" Ȧ����\n");
	for (int i = 0; i < 9; i++) {
		if (arr[i] % 2 != 0) {
			printf("%d ", arr[i]);
		}
	}
}
