// **** �� �ڵ�


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
int x = 0;
int getScore(int x) {
	if (x >= 90 && x <= 100) {
		printf("A");
		return 0;//void ���� �Ƚᵵ ��. int�� �ϳ��� ������� �ؼ� ��. 
	}
	else if (x >= 80 && x <= 90) {
		printf("B");
		return 0;
	}
	else if (x >= 70 && x <= 80) {
		printf("C");
		return 0;
	}
	else {
		printf("���� �����");
		return 0;
		
	}

}

int main()
{
	scanf_s("%d", &x);
	getScore(x);
	return 0;

}

// ***** �� �ڵ�


int test()(int max, int min,int score){
	if (max > score && score >= min) return 1;
	else return 0;
}


int yourscore = 0;

void getScore(int x) {
	if (test(100,90,yourScore) {
		printf("A");

	}
	else if (test(90, 80, yourScore90) {
		printf("B");
		
	}
	else if (test(80, 70, yourScore90) {
		printf("C");
	
	}
	else {
		printf("���� �����");
	

	}

}

int main()
{
	printf("������ �Է�");
	int score;
	scanf_s("%d", &score);
	getScore(yourscore);
	return 0;

}