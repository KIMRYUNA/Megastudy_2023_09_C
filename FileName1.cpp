// 정수 배열을 선언 해주고
// 입력할 숫자의 n개수를 넣어주고
// 숫자 n개만큼 입력하고
// 가장 큰 수를 구하는 프로그램 작성

#include <stdio.h>
int main() {

	int arr[9999];
	int n;
	int max = 0;

	scanf_s("%d", &n);

	for(int i=0;i<n;i++) {
		scanf_s("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	printf("가장 큰수는 %d", max);

}



#include <stdio.h>
int main() {

	int k[1000];
	int input;
	printf("입력 : ");
	scanf_s("%d", &input);

	for (int i = 0; i < input; i++) {
		scanf_s("%d", k[i]);
	}
	int max = k[0];

	for (int j = 0; j < input; j++) {
		if (max < k[j]) max = k[j];
	}

	printf("가장 큰 수는 %d에요", max);

}
