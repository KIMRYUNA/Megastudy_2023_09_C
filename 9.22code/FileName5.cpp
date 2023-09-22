#include<stdio.h>

int a ;
int b ;

void sum() {
	printf("a+b : %d\n", a+b);

}

void minus() {

	printf("a-b : %d\n", a-b);
	
}

int main()
{
	scanf_s("%d",&a);
	getchar();
	scanf_s("%d",&b);

	sum();
	minus();
}

//¾ËÆÄºª ½ºÆç¸µ ¹Ù²Ù±â
