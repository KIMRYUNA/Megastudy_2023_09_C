//#구조체
//1.Typedef: 기존 타입에 새로운 이름 지정에 사용.

#include<stdio.h>

typedef int length;
typedef char* string; 



int main() {
	int size = 10;
	length size = 100;
	length width = 100;
	length height = 10;
	
	printf("면적은 %d입니다.", width * height);
	string name = "megastudy";//megastudy라는 문자열 만듬, 
	//실제로 'm','e'이런식으로 저장됨. 
	//포인터는 문자를 가르킴 
	//이 포인터는 문자열의 시작주소를 가리킬 수 있음
	//type def -> string str2 ="megastudy 포인터로 문자열 리터럴 가르킴.



	return 0;
}