//#����ü
//1.Typedef: ���� Ÿ�Կ� ���ο� �̸� ������ ���.

#include<stdio.h>

typedef int length;
typedef char* string; 



int main() {
	int size = 10;
	length size = 100;
	length width = 100;
	length height = 10;
	
	printf("������ %d�Դϴ�.", width * height);
	string name = "megastudy";//megastudy��� ���ڿ� ����, 
	//������ 'm','e'�̷������� �����. 
	//�����ʹ� ���ڸ� ����Ŵ 
	//�� �����ʹ� ���ڿ��� �����ּҸ� ����ų �� ����
	//type def -> string str2 ="megastudy �����ͷ� ���ڿ� ���ͷ� ����Ŵ.



	return 0;
}