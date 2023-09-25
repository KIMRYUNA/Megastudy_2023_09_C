// type def: int-> length char ->string

#include<stdio.h>
#include<string.h>

typedef struct ingredient {

	int shot;
	int milk;
	int syrup;

} STARBUK;

struct starbuckCoffee {

	char name[50];//1.커피이름
	int price;//2.커피 가격
	char size;//3.커피 사이즈
	int kcal;//4. 커피 칼로리
	struct ingredient a;//5.커피 재료(원두,우유,시럽)
};


int main() {
	
	struct starbuckCoffee mycoffee = { "americano",4500,'g',50,{2,150,3} };


	printf("%s의 가격은 %d이고 사이즈는 %c이고 칼로리는 약 %dkcal이며 재료는 원두 %d개 우유 %dml 시럽 %d회 입니다.",
		mycoffee.name, mycoffee.price, mycoffee.size, mycoffee.kcal, mycoffee.a.shot, mycoffee.a.milk, mycoffee.a.syrup);

	STARBUK decaf_americano;


}