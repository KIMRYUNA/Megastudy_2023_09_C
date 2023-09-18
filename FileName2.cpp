#include<stdio.h>

int main() {
	// 문자+열
	//
	char a = 'a';
	char s[6] = "kim";
	char k[5] = { 'a','b','c','d' };
	//스펠링 갯수 모를때 유용

	char water[] = "watermelon";
	printf("%s", water\n);

	//null 포인트 값(=종료)
	char b[] = "hello\0 world"; //이렇게하면 hello까지만 출력 널값때문에

	char c[] = "megastudy";
	
	printf("%c", c[3]);//a가 나옴
	c[0] = 'n';//negastudy;
	c[1] = 'a';//nagastudy;
	printf("%s", c);//nagastudy;
	
	//★★★문자열 입력 받기 
	char m[1000];//담는 그릇 천개
	int a;//담는 그릇 한개

	a = 1;
	m[0] = 1;//m=1 안되는 이유가 주소 연산자를 m으로 써서

	scanf_s("%d", &a);
	scanf_s("%s", m); //배열 자체가 주소라 주소 지정 X

	//== (비교 연산자)
	//=  (대입연산자)
	//>< (비교연산자)
	//& 이 친구도 같은 연산자야!!(주솟값 찾는 연산자)
}