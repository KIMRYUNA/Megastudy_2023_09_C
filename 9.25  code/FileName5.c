// type def: int-> length char ->string

#include<stdio.h>
#include<string.h>

typedef struct ingredient {

	int shot;
	int milk;
	int syrup;

} STARBUK;

struct starbuckCoffee {

	char name[50];//1.Ŀ���̸�
	int price;//2.Ŀ�� ����
	char size;//3.Ŀ�� ������
	int kcal;//4. Ŀ�� Į�θ�
	struct ingredient a;//5.Ŀ�� ���(����,����,�÷�)
};


int main() {
	
	struct starbuckCoffee mycoffee = { "americano",4500,'g',50,{2,150,3} };


	printf("%s�� ������ %d�̰� ������� %c�̰� Į�θ��� �� %dkcal�̸� ���� ���� %d�� ���� %dml �÷� %dȸ �Դϴ�.",
		mycoffee.name, mycoffee.price, mycoffee.size, mycoffee.kcal, mycoffee.a.shot, mycoffee.a.milk, mycoffee.a.syrup);

	STARBUK decaf_americano;


}