//Quiz
//�Լ��� ��swap
//�Ű����� :int x,int y
//1. x,y�� �������� �Է� �ް�
//swap �Լ��� �̿��ؼ� ���� �ٲٰ�
//x�� y ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 


#include<stdio.h>

void swap(int *x,int *y) {
	int tmp= *x;
	*x = *y;
	*y = tmp;

}

int main()
{
	int x = 5;
	int y = 10;
	swap(&x, &y);
	printf("x: %d, y: %d",x,y);
	return 0;

}


