#include<stdio.h>

//������ �� ��ĥ�Ÿ� ����(global ����)
//�ƴϸ� ����(local ����)
int c = 10;
void a(){
	//local(����) ����
	int a = 10;
	printf("a���� %d�Դϴ�\n", a);
	c++;
}

void b() {
	//local(����) ����
	int b = 20;
	printf("b���� %d�Դϴ�\n", b);
	c++;
}



int main()
{
	
	a();
	b();
	printf("a���� %d�Դϴ�\n", a);//�̰� �ȵ�. 
	//a�� local(����) ���� void �ȿ����� ����,
	//�׷��� void �ҷ��;߸� ����

	printf("c���� %d�Դϴ�\n", c);//����, ���� ��������(�������� ȭ��Ʈ,�� ���� ����)



}
