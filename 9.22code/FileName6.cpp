#include<stdio.h>


//f(x)=x+5; 5������ 10
//f(x)=x+5; 5������ 11
//f(x)=x+5; 5������ 12


//���ϰ� �Լ��̸�(�Ű�����..){
//����...
//����
//����
//return ��
//}

//�Ű� ����(args),���ڰ�
int sum(int x) {
	return x + 5;
}

double divide(double a,double b) {
	return a / b;
}



int main()
{
	int a = sum(10);//������ �� �ٽ� �־��ֱ�
	printf("%d\n",a);

	int b = divide(5.3, 3.3);
	printf("%d\n", b);
	return 0;

}