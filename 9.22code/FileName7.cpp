// **** 내 코드


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
int x = 0;
int getScore(int x) {
	if (x >= 90 && x <= 100) {
		printf("A");
		return 0;//void 쓰면 안써도 됨. int는 하나라도 돌려줘야 해서 씀. 
	}
	else if (x >= 80 && x <= 90) {
		printf("B");
		return 0;
	}
	else if (x >= 70 && x <= 80) {
		printf("C");
		return 0;
	}
	else {
		printf("ㅅㄱ 재수강");
		return 0;
		
	}

}

int main()
{
	scanf_s("%d", &x);
	getScore(x);
	return 0;

}

// ***** 쌤 코드


int test()(int max, int min,int score){
	if (max > score && score >= min) return 1;
	else return 0;
}


int yourscore = 0;

void getScore(int x) {
	if (test(100,90,yourScore) {
		printf("A");

	}
	else if (test(90, 80, yourScore90) {
		printf("B");
		
	}
	else if (test(80, 70, yourScore90) {
		printf("C");
	
	}
	else {
		printf("ㅅㄱ 재수강");
	

	}

}

int main()
{
	printf("점수를 입력");
	int score;
	scanf_s("%d", &score);
	getScore(yourscore);
	return 0;

}