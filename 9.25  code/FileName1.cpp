#include<stdio.h>
#include<math.h>
// ���������� �ظ� ���ϴ� �Լ� ������ּ���.

void secondSolve(double a, double b, double c) {
	double root = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
	double root1 = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;
	printf("%.2If %.2If", root, root1);

}

int main()
{	
	// ���� ��� : x^2-4x+4�� x�� ���� ?
	// ax^2+bx+c=0

	double a = 1, b = -4, c = 4;
	secondSolve(a,b,c);
	return 0;

}