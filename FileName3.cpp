// 9.18 배열 평균, 합 구하기
//내 코드

#include<stdio.h>

int main() {


	float arr[5];
	float sum = 0;
	

	for (int i = 0; i < 5; i++) {
		scanf_s("%f", &arr[i]);
	}

	for (int i = 0; i < 5; i++) {
		sum = sum + arr[i];

	}
	printf("합은 : %.2f\n", sum);
	printf("평균은 : %.2f\n", sum/5);

}

// 선생님 코드
//1. 실수 배열 5개 선언
double num[5];
sum;
avg;
//2. 배열의 5번 입력 받기
for(int i = 0; i < 5; i++) {
	scanf_s("%lf",&num[i]);
}
//3. 합 구하기
double sum = 0;
for (int i = 0; i<5; i++) {
	sum += num[i];
}
//4. 평균 구하기
double avg = sum / 5;

//5. 출력하기
printf("합은 %lf 평균은 %If",sum,avg);


