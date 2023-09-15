//2번 문제 12345->1만2천3백4십5

//*내 코드
#include<stdio.h>
int main() {
	int a = 0;
	printf("입력:");
	scanf_s("%d", &a);

	printf("%d\n", a / 10000);
	printf("%d\n", a / 1000);
	printf("%d\n", a / 100);
	printf("%d\n", a / 10);
	printf("%d\n", a / 1);
}
//선생님 코드
#include<stdio.h>
int main() {

	printf("0~99999 사이의 정수를 입력하세요.");
	int num;
	printf("입력:");
	scanf_s("%d", &num);
	int divider = 10000;
	int result[5];

	for (int i = 0; i < 5; i++) {
		result[i] = num / divider;
		num = num % divider;
		divider /= 10;

	}
	printf("%d만%d천%d백%d십%d", result[0], result[1], result[2], result[3], result[4]);

	//54321
	int ten_thousand = num / 10000; //5
	num = num % 1000;
	int thousand = num / 1000;
	num = num % 100;
	int hundred = num / 100;
	num = num % 10;
	int ten = num / 10;
	num = num % 10;
	int one = num;
}
	