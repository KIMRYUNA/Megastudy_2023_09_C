#include<stdio.h>
int main() {
	char words[4][7] = {//�ܾ� 4�� 7���ڱ���
		"hello",
		"world",
		"doodle",
		"google"
	};
	char* ptr = words[2];//doodle ����Ű���� ����
	printf("Before : %s\n", words[2]);
	

	// �ٲٰ� ���� �ܾ� ���� �� , �ش� �ܾ��� 3��° ���縵 �Է��� ���ĺ����� �ٲٰ�
	// �ٲ� �� 4�� �ܾ� ���


	//�ٲٰ� ���� �ܾ� �����ϱ�
	scanf_s("%c", &words[i][2]);
	
	//�ش� �ܾ��� 3��° ���縵 �Է¹��� ���ĺ����� ��ġ��
	scanf_s("%c", &words[i][2]);
	
	// ��ü �ܾ� �����ֱ�
	printf("\n4 words\n");
	for (int i = 0; i < 4; i++) {
		printf("%s\n", words[i]);
	}


	}
