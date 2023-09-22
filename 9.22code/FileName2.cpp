#include<stdio.h>
int main()
{
	//px에 x에 저장
	// 사용자로부터 값 받기
	//값 바꾸기 
	int x, y;
	int* px, * py, * tmp;

	px = &x;//주솟값 저장
	py = &y;//주솟값 저장

	scanf_s("%d", px);
	getchar(); // enter가 값으로 들어가서 getchar 써주기 / 보통 버퍼는 모았다가 한번에 처리 그걸 막아주는게 getchar
	scanf_s("%d", py);

	

	printf("BEFORE\n");
	printf("%d\n", *px);
	printf("%d\n", *py);

	tmp = px;
	px = py;
	py = tmp;

	printf("AFter\n");
	printf("%d\n", *px);
	printf("%d\n", *py);


	




	return 0;
}