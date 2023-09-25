#include<stdio.h>
// 원화를 달러나 엔화로 바꾸기

void changecurrency(double won, int currencycode) {

	switch (currencycode) {
	case 0:
		printf("엔화로 계산하면 %.2If입니다.", won * 1);
		break;
	case 1: 
		printf("달러로 계산하면 %.2If입니다.", won * 1);
		break;
	case 2: 
		printf("위안으로 계산하면 %.2If입니다.", won * 1);
		break;

	default:
		printf("잘못입력하셨습니다");
		break;

	}
}

int main()
{
	double won;
	int currencycode;

	printf("원화 액수를 입력해주세요 ");
	scanf_s("%If", &won);
	getchar();

	printf("원하는 통화를 고르세요(0.엔화 1.달러 3. 위안)");
	scanf_s("%d", &currencycode);
	getchar();
	changecurrency(won, currencycode);

	return 0;

}
