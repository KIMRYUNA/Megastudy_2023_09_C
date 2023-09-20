//배열에서의 주솟값은 좀 다르다!

#include<stdio.h>
int main() {

	int a[5] = { 1,3,5,7,9 };
	int* pArr;
	pArr = a;//배열에서는 &a가 아닌 a를 넣어야 함.

	printf("%d\n", pArr);//배열 a의 주솟값
	printf("%d\n", *pArr);// 1 / 배열 a의 첫번째값
	printf("%d\n", *(pArr + 1)); // 3 / 배열a의 두번째값 ->int가 4바이트 +1씩
	pArr++;
	printf("%d", *pArr);



	printf("%d\n", *(pArr + 2)); // 3 / 배열a의 세번째값
	printf("%d\n", pArr + 2);//a[2]의 주솟값

}
//컴터는 01만 존재함. 2의 0승 나옴.
//bit 가장 작은 단위
//8bit =1byte
// 
//1024byte

/*int 타입의 변수는 대부분의 현대의 컴파일러와 시스템에서
* 4바이트(32비트)로 할당됩니다.
* 따라서 &a+1의 값을 계산하면 a의 주소에서 4바이트는 총 32비트가 됩니다.
* 이는 표준int 타입의 변수가 32비트 정수를 표현할 수 있음을 의미합니다.(물론, 실제로 사용
* 가능한 비트 수는 부호 및 표현 방식에 따라 다를 수 있습니다.
)*/



// int (*pa)[3]//포인터가 3개인 배열