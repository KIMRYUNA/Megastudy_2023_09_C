//2�� ���� 12345->1��2õ3��4��5

//*�� �ڵ�
#include<stdio.h>
int main() {
	int a = 0;
	printf("�Է�:");
	scanf_s("%d", &a);

	printf("%d\n", a / 10000);
	printf("%d\n", a / 1000);
	printf("%d\n", a / 100);
	printf("%d\n", a / 10);
	printf("%d\n", a / 1);
}
//������ �ڵ�
#include<stdio.h>
int main() {

	printf("0~99999 ������ ������ �Է��ϼ���.");
	int num;
	printf("�Է�:");
	scanf_s("%d", &num);
	int divider = 10000;
	int result[5];

	for (int i = 0; i < 5; i++) {
		result[i] = num / divider;
		num = num % divider;
		divider /= 10;

	}
	printf("%d��%dõ%d��%d��%d", result[0], result[1], result[2], result[3], result[4]);

	//54321
	int ten_thousand = num / 10000; //5
	num = num % 1000;
	int thousand = num / 1000;
	num = num % 100;
	int hundred = num / 100;
	num = num % 10;
	int ten = num / 10;
	num = num % 10;
	int one = num;
}
	