#include<stdio.h>
int main() {
	int matrix[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};

	printf("matrix[1][2]:%d\n", matrix[1][2]);
	int(*p)[4] = matrix; //matrix ù��° �� ����Ŵ.
	printf("p[1][2]: %d\n", p[1][2]); //7�� ���

	

	
	
	
	//2�� 5,6,7,8; ����Ʈ �̿��ض�
	int(*pp)[4];
	matrix[1];//�ι�° ���� �ּڰ�
	pp = &matrix[1];

	for (int i = 0; i < 4; i++) {
		printf("%d\n", (*pp)[i]);
	}

}