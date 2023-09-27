#include<stdio.h>
#include<string.h>

typedef struct MovieScreening {
	char movieTitle[50];
	char screeningtime[10];
	int seats[100];
} MovieScreening;




void showSeats(MovieScreening *screening) {
	printf("��ȭ%s�� �¼� ��Ȳ�� \n", screening->movieTitle);
	for (int i = 0; i < 100; i++) {
		if (screening->seats[i] == 1) {
			printf("%d�� �¼��� ����ƽ��ϴ�.\n", i);
		}
		else {

			printf("%d�� �¼��� ���డ���մϴ�.\n", i);
		}
	}
} 

void reserveSeats(MovieScreening* screening,int seat) {
	printf("��ȭ %s��", screening->movieTitle);
	if (screening->seats[seat] == 1) {
		printf("%d�� �¼��� ������ �Ұ����մϴ�", seat);
	}
	else
	{
		screening->seats[seat] = 1;
		printf("%d�� �¼��� ������ �ƽ��ϴ�", seat);
	}

}
int main() {


	MovieScreening m1 = { "Interstellar","15:00", {0}};//100���� ��Ʈ 0���� �ʱ�ȭ�ϴ� ���
	showSeats(&m1);
	reserveSeats(&m1, 32);
	reserveSeats(&m1, 77);
	reserveSeats(&m1, 77);

	
	return 0;

	
}

