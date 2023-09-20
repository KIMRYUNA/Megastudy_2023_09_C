#include<stdio.h>
int main() {
	int matrix[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};

	printf("matrix[1][2]:%d\n", matrix[1][2]);
	int(*p)[4] = matrix; //matrix 첫번째 행 가리킴.
	printf("p[1][2]: %d\n", p[1][2]); //7을 출력

	

	
	
	
	//2행 5,6,7,8; 포인트 이용해라
	int(*pp)[4];
	matrix[1];//두번째 행의 주솟값
	pp = &matrix[1];

	for (int i = 0; i < 4; i++) {
		printf("%d\n", (*pp)[i]);
	}

}