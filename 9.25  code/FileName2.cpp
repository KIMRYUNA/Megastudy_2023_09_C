#include<stdio.h>
// ��ȭ�� �޷��� ��ȭ�� �ٲٱ�

void changecurrency(double won, int currencycode) {

	switch (currencycode) {
	case 0:
		printf("��ȭ�� ����ϸ� %.2If�Դϴ�.", won * 1);
		break;
	case 1: 
		printf("�޷��� ����ϸ� %.2If�Դϴ�.", won * 1);
		break;
	case 2: 
		printf("�������� ����ϸ� %.2If�Դϴ�.", won * 1);
		break;

	default:
		printf("�߸��Է��ϼ̽��ϴ�");
		break;

	}
}

int main()
{
	double won;
	int currencycode;

	printf("��ȭ �׼��� �Է����ּ��� ");
	scanf_s("%If", &won);
	getchar();

	printf("���ϴ� ��ȭ�� ������(0.��ȭ 1.�޷� 3. ����)");
	scanf_s("%d", &currencycode);
	getchar();
	changecurrency(won, currencycode);

	return 0;

}
