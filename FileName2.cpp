#include<stdio.h>
int main() {
	int a;
	int b;
	printf("���� a�� ���� �Է��ϼ��� ");
	scanf_s("%d", &a);
	printf("���� b�� ���� �Է��ϼ��� ");
	scanf_s("%d", &b);

	int* pa;//������ ����

	pa = &b;
	printf("�ٲ� a�� ���� %d ", *pa);

	pa = &a;
	printf("�ٲ� b�� ���� %d ", *pa);

	//*pa�� ��
	//&pa�� �ּڰ�
}