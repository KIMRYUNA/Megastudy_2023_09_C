//Quiz
//함수명 ㅣswap
//매개변수 :int x,int y
//1. x,y값 유저에게 입력 받고
//swap 함수를 이용해서 서로 바꾸고
//x와 y 값을 출력하는 프로그램을 작성하시오. 


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


