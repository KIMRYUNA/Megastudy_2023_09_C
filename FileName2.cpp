#include<stdio.h>
#include<string.h>
void swap(int *a, int *b) {//�ּڰ��ַ��� ������ ����ֱ�
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	
}

int main() {
	int m = 10;
	int n = 20;
	
	swap(&m, &n);//m�� n�� �ּڰ��� ��� �����ؼ� �ٲ�. 
	printf("a=%d, b=%d", m, n);
	 return 0;

}



