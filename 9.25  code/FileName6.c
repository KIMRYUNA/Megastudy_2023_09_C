#include<stdio.h>
#include<string.h>



struct menu {

	char a1;
	char a2;
	char a3;

};


typedef struct custom {

	char nickname[50];

	char menu_list [100] [50] ;
	//{{"americano"},{"latte"},{"americano"}{"dolce"}}//100���� ������ Ŀ�Ǹ���Ʈ ��50���ڸ� ���Ǵ� Ŀ���̸�.

	int Acount;
	int Amoney;

} custom;

void buyCoffee(custom *customer,Ediya Coffee) {
	customer.Acount ++ ;



}


struct ingredient {

	int shot;
	int milk;
	int syrup;

} ingredient;

typedef struct Ediya {

	char name[50];//1.Ŀ���̸�
	int price;//2.Ŀ�� ����
	char size;//3.Ŀ�� ������
	int kcal;//4. Ŀ�� Į�θ�
	struct ingredient a;//5.Ŀ�� ���(����,����,�÷�)

}Ediya;


int main() {

	Ediya or = { .name = "americano",
		.price = 4500,
		.size = 'g',
		.kcal = 50,
		.a = {2,150,3} };


	custom pr =
	{ .nickname = "mun",
	  .Acount = 0,
		.menu_list = "latte,decaflatte",
		.Amoney = 0 };

	printf("%s�� ������ %d�̰� ������� %c�̰� Į�θ��� �� %dkcal�̸� ���� ���� %d�� ���� %dml �÷� %dȸ �Դϴ�.",
		or.name, or.price, or.size, or.kcal, or.a.shot, or.a.milk, or.a.syrup);


	printf("%s�� �ֹ��Ͻ� �޴��� %s, %s, %s�̰� ������ �Ѱ����� %d�̰� �� ������� %d�Դϴ�.",
		pr.nickname, pr.da.a1, pr.da.a2, pr.da.a3,pr.Acount,pr.Amoney);

	buyCoffee()

}

