#include<stdio.h>
int main() {

	int ws = 0;

	char words[4][7] = {//�ܾ� 4�� 7���ڱ���
		"hello",
		"world",
		"doodle",
		"google"
	};


	printf("���° �ܾ�? : ");
	scanf_s("%d",&ws);
	char* ptr = words[ws];
	printf("Before : %s\n", words[ws]);
	getchar();

	// �ٲٰ� ���� �ܾ� ���� �� , �ش� �ܾ��� 3��° ���縵 �Է��� ���ĺ����� �ٲٰ�
	// �ٲ� �� 4�� �ܾ� ���

	//�ٲٰ� ���� �ܾ� �����ϱ�

	//�ش� �ܾ��� 3��° ���縵 �Է¹��� ���ĺ����� ��ġ��
	printf("�ٲ� ���縵 �Է� : ");
	scanf_s("%c", &words[ws][2]);

	// ��ü �ܾ� �����ֱ�
	printf("\n��� ���\n");
	for (int i = 0; i < 4; i++) {
		printf("%s\n", words[i]);
	}


}

