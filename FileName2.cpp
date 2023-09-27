#include<stdio.h>
#include<string.h>
void swap(int *a, int *b) {//주솟값주려면 포인터 찍어주기
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	
}

int main() {
	int m = 10;
	int n = 20;
	
	swap(&m, &n);//m과 n의 주솟값을 줘야 참조해서 바꿈. 
	printf("a=%d, b=%d", m, n);
	 return 0;

}



