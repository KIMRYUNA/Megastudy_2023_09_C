//#����ü
//2. ����ü
#include<stdio.h>
#include<string.h>



typedef struct Student {
	int id;
	char name[100];
	char major[100];
} STUDENT;



int main() {
		// int, double, char, float, -> �⺻ Ÿ��
		// ����ü					 ->(Ŀ���͸����� Ÿ��)
		
	int a = 100;
	struct Student kim = {22,"kimryuna","media"};//���� �� �ʱ�ȭ

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

		printf("%s�� ������ %s�̰� id�� %d�Դϴ�",kim.name,kim.major,kim.id);
		STUDENT Lee;

}