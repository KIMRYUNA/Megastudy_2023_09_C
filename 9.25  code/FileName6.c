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
	//{{"americano"},{"latte"},{"americano"}{"dolce"}}//100개의 구매한 커피리스트 단50글자만 허용되는 커피이름.

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

	char name[50];//1.커피이름
	int price;//2.커피 가격
	char size;//3.커피 사이즈
	int kcal;//4. 커피 칼로리
	struct ingredient a;//5.커피 재료(원두,우유,시럽)

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

	printf("%s의 가격은 %d이고 사이즈는 %c이고 칼로리는 약 %dkcal이며 재료는 원두 %d개 우유 %dml 시럽 %d회 입니다.",
		or.name, or.price, or.size, or.kcal, or.a.shot, or.a.milk, or.a.syrup);


	printf("%s가 주문하신 메뉴는 %s, %s, %s이고 구매한 총개수는 %d이고 총 지출액은 %d입니다.",
		pr.nickname, pr.da.a1, pr.da.a2, pr.da.a3,pr.Acount,pr.Amoney);

	buyCoffee()

}

