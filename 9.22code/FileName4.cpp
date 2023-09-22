#include<stdio.h>

//영향을 다 끼칠거면 전역(global 변수)
//아니면 지역(local 변수)
int c = 10;
void a(){
	//local(지역) 변수
	int a = 10;
	printf("a값은 %d입니다\n", a);
	c++;
}

void b() {
	//local(지역) 변수
	int b = 20;
	printf("b값은 %d입니다\n", b);
	c++;
}



int main()
{
	
	a();
	b();
	printf("a값은 %d입니다\n", a);//이거 안됨. 
	//a는 local(지역) 변수 void 안에서만 영향,
	//그래서 void 불러와야만 가능

	printf("c값은 %d입니다\n", c);//가능, 전역 변수여서(웹페이지 화이트,블랙 모드는 전역)



}
