#include<stdio.h>
int main()
{
	//px�� x�� ����
	// ����ڷκ��� �� �ޱ�
	//�� �ٲٱ� 
	int x, y;
	int* px, * py, * tmp;

	px = &x;//�ּڰ� ����
	py = &y;//�ּڰ� ����

	scanf_s("%d", px);
	getchar(); // enter�� ������ ���� getchar ���ֱ� / ���� ���۴� ��Ҵٰ� �ѹ��� ó�� �װ� �����ִ°� getchar
	scanf_s("%d", py);

	

	printf("BEFORE\n");
	printf("%d\n", *px);
	printf("%d\n", *py);

	tmp = px;
	px = py;
	py = tmp;

	printf("AFter\n");
	printf("%d\n", *px);
	printf("%d\n", *py);


	




	return 0;
}