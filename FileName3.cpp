// 9.18 �迭 ���, �� ���ϱ�
//�� �ڵ�

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
	printf("���� : %.2f\n", sum);
	printf("����� : %.2f\n", sum/5);

}

// ������ �ڵ�
//1. �Ǽ� �迭 5�� ����
double num[5];
sum;
avg;
//2. �迭�� 5�� �Է� �ޱ�
for(int i = 0; i < 5; i++) {
	scanf_s("%lf",&num[i]);
}
//3. �� ���ϱ�
double sum = 0;
for (int i = 0; i<5; i++) {
	sum += num[i];
}
//4. ��� ���ϱ�
double avg = sum / 5;

//5. ����ϱ�
printf("���� %lf ����� %If",sum,avg);


