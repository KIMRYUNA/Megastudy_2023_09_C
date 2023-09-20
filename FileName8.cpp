#include<stdio.h>
int main() {
	char words[4][7] = {//단어 4개 7글자까지
		"hello",
		"world",
		"doodle",
		"google"
	};
	char* ptr = words[2];//doodle 가리키도록 설정
	printf("Before : %s\n", words[2]);
	

	// 바꾸고 싶은 단어 선택 후 , 해당 단어의 3번째 스펠링 입력한 알파벳으로 바꾸고
	// 바꾼 뒤 4개 단어 출력


	//바꾸고 싶은 단어 선택하기
	scanf_s("%c", &words[i][2]);
	
	//해당 단어의 3번째 스펠링 입력받은 알파벳으로 고치기
	scanf_s("%c", &words[i][2]);
	
	// 전체 단어 보여주기
	printf("\n4 words\n");
	for (int i = 0; i < 4; i++) {
		printf("%s\n", words[i]);
	}


	}
