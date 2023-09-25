#include<stdio.h>
#include<math.h>
// 이차방정식 해를 구하는 함수 만들어주세요.

void secondSolve(double a, double b, double c) {
	double root = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
	double root1 = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;
	printf("%.2If %.2If", root, root1);

}

int main()
{	
	// 예시 잡기 : x^2-4x+4의 x의 값은 ?
	// ax^2+bx+c=0

	double a = 1, b = -4, c = 4;
	secondSolve(a,b,c);
	return 0;

}