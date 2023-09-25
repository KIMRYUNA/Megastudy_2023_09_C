//#구조체
//2. 구조체
#include<stdio.h>
#include<string.h>



typedef struct Student {
	int id;
	char name[100];
	char major[100];
} STUDENT;



int main() {
		// int, double, char, float, -> 기본 타입
		// 구조체					 ->(커스터마이즈 타입)
		
	int a = 100;
	struct Student kim = {22,"kimryuna","media"};//선언 및 초기화

		kim.id = 20;
		/*kim.name[0] = 'k';
		kim.name[1] = 'i';
		kim.name[2] = 'm';
		kim.name[3] = '\0';*/
		
		strcpy_s(kim.name, sizeof(kim.name),"kim mega");

		strcpy_s(kim.major, sizeof(kim.major), "media communication");

		kim.major[0] = 'c';
		kim.major[1] = 'o';
		kim.major[2] = 'm';
		kim.name[3] = '\0';

		printf("%s의 전공은 %s이고 id는 %d입니다",kim.name,kim.major,kim.id);
		STUDENT Lee;

}