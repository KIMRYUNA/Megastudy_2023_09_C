#include <stdio.h>
#include<string>
typedef struct Ingredients {
	int shots;
	int milks_ml;
	int syrup_pumps;
} Ingredients;

typedef struct Ediya {
	char name[50];
	int price;
	char size;
	int calories;
	Ingredients ingredients;
} Ediya;

typedef struct Custom {
	char nickname;
	char bought_list[100][50];
	int bought_amount;
	int bought_payment;

}Custom;


void buyCoffee(Custom* customer, Ediya coffee)//������ �ø��� �Լ�
{
	customer->bought_amount++;
	customer->bought_payment = customer->bought_payment + coffee.price;
}

int main() {
	Ediya americano = {
		.name = "americano",
		.price = "3000",
		.size = 'L',
		.calories = 150,
		.ingredients = {2,150,0},
	};

	Ediya latte = {
	.name = "latte",
	.price = "4000",
	.size = 'L',
	.calories = 150,
	.ingredients = {2,50,0},
	};

	Custom Runa = {
		.nickname = "Runa",
		.bought_amount = 0,
		.bought_payment = 0,
	};

	buyCoffee(&Runa, latte);
	buyCoffee(&Runa, latte);
	buyCoffee(&Runa, latte);
	buyCoffee(&Runa, latte);
	buyCoffee(&Runa, latte);

	printf("Runa�� %d�� �󶼸� �����ϰ�, %d�� ������ �Ͽ���", Runa.bought_amount, Runa.bought_payment)
		;
}