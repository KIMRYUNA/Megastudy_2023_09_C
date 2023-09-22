#include<stdio.h>


//f(x)=x+5; 5넣으면 10
//f(x)=x+5; 5넣으면 11
//f(x)=x+5; 5넣으면 12


//리턴값 함수이름(매개변수..){
//로직...
//로직
//로직
//return 값
//}

//매개 변수(args),인자값
int sum(int x) {
	return x + 5;
}

double divide(double a,double b) {
	return a / b;
}



int main()
{
	int a = sum(10);//돌려준 값 다시 넣어주기
	printf("%d\n",a);

	int b = divide(5.3, 3.3);
	printf("%d\n", b);
	return 0;

}