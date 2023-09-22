#include<stdio.h>
int main() {

	int ws = 0;

	char words[4][7] = {//단어 4개 7글자까지
		"hello",
		"world",
		"doodle",
		"google"
	};


	printf("몇번째 단어? : ");
	scanf_s("%d",&ws);
	char* ptr = words[ws];
	printf("Before : %s\n", words[ws]);
	getchar();

	// 바꾸고 싶은 단어 선택 후 , 해당 단어의 3번째 스펠링 입력한 알파벳으로 바꾸고
	// 바꾼 뒤 4개 단어 출력

	//바꾸고 싶은 단어 선택하기

	//해당 단어의 3번째 스펠링 입력받은 알파벳으로 고치기
	printf("바꿀 스펠링 입력 : ");
	scanf_s("%c", &words[ws][2]);

	// 전체 단어 보여주기
	printf("\n결과 출력\n");
	for (int i = 0; i < 4; i++) {
		printf("%s\n", words[i]);
	}


}

