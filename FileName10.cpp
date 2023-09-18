#include<stdio.h>
//teacher 코드
int main() {
	int systemnumber = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int* pa;

	while (true) {

		printf("프로그램 : 비트코인\n");
		printf("1.비트코인 시세 수정 하기 \n");
		printf("2. 이더리움 시세 수정 하기 \n");
		printf("3. 도지코인 시세 수정 하기 \n");
		printf("4. 총 시세 보기  \n");
		printf("5. 프로그램 종료   \n");
		printf("입력 : ");
		scanf_s("%d", &systemnumber);

		switch (systemnumber) {


		case 1:
			printf("비트코인 시세 수정: \n");
			pa = &a;
			scanf_s("%d", pa);

			printf("1. 비트코인 시세 :%d\n", a);
			break;

		case 2:
			printf("2. 이더리움 시세 수정 하기\n");
			pa = &b;
			scanf_s("%d", pa);
			printf("2. 이더리움 시세 :%d\n", b);
			break;


		case 3:
			printf("3. 도지코인 시세 수정 하기\n");
			pa = &c;
			scanf_s("%d", pa);
			printf("3. 도지코인 시세 :%d\n", c);
			break;

		case 4:
			printf("4. 총 시세 보기\n");
			pa = &a;
			printf("1.비트코인 시세 :%d\n", *pa);

			pa = &b;
			printf("2.이더리움 시세 :%d\n", *pa);

			pa = &c;
			printf("3.도지코인 시세 :%d\n", *pa);
			break;

		case 5:
			return 0;
		
		default:
			printf("잘못입력\n");
			break;


		}
	}
	return 0;
}