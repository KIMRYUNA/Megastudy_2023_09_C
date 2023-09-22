#include<stdio.h>
int main() {

	//배열의 두번째 주소와 값 출력
	//++연산자를 통해서 다음 주소와 값을 출력하는 코드 작성.


	int ar[5] = { 2,3,-7,1,4 };
	int* p;
	p = &ar[1];// 주솟값 넣기


		printf("배열의 두번째 주소값 %d\n", p);
		printf("배열의 두번째 값 %d\n", *p);
		
		p++;
		printf("배열의 다음 주소값 %d\n", p);
		printf("배열의 다음 값 %d\n",*p);




	return 0;
}