#include<stdio.h>

int main() {
	// ����+��
	//
	char a = 'a';
	char s[6] = "kim";
	char k[5] = { 'a','b','c','d' };
	//���縵 ���� �𸦶� ����

	char water[] = "watermelon";
	printf("%s", water\n);

	//null ����Ʈ ��(=����)
	char b[] = "hello\0 world"; //�̷����ϸ� hello������ ��� �ΰ�������

	char c[] = "megastudy";
	
	printf("%c", c[3]);//a�� ����
	c[0] = 'n';//negastudy;
	c[1] = 'a';//nagastudy;
	printf("%s", c);//nagastudy;
	
	//�ڡڡڹ��ڿ� �Է� �ޱ� 
	char m[1000];//��� �׸� õ��
	int a;//��� �׸� �Ѱ�

	a = 1;
	m[0] = 1;//m=1 �ȵǴ� ������ �ּ� �����ڸ� m���� �Ἥ

	scanf_s("%d", &a);
	scanf_s("%s", m); //�迭 ��ü�� �ּҶ� �ּ� ���� X

	//== (�� ������)
	//=  (���Կ�����)
	//>< (�񱳿�����)
	//& �� ģ���� ���� �����ھ�!!(�ּڰ� ã�� ������)
}