#include<stdio.h>
#include<string.h>

typedef struct MovieScreening {
	char movieTitle[50];
	char screeningtime[10];
	int seats[100];
} MovieScreening;




void showSeats(MovieScreening *screening) {
	printf("영화%s의 좌석 현황은 \n", screening->movieTitle);
	for (int i = 0; i < 100; i++) {
		if (screening->seats[i] == 1) {
			printf("%d의 좌석은 예약됐습니다.\n", i);
		}
		else {

			printf("%d의 좌석은 예약가능합니다.\n", i);
		}
	}
} 

void reserveSeats(MovieScreening* screening,int seat) {
	printf("영화 %s의", screening->movieTitle);
	if (screening->seats[seat] == 1) {
		printf("%d의 좌석은 예약이 불가능합니다", seat);
	}
	else
	{
		screening->seats[seat] = 1;
		printf("%d의 좌석은 예약이 됐습니다", seat);
	}

}
int main() {


	MovieScreening m1 = { "Interstellar","15:00", {0}};//100개의 시트 0으로 초기화하는 방법
	showSeats(&m1);
	reserveSeats(&m1, 32);
	reserveSeats(&m1, 77);
	reserveSeats(&m1, 77);

	
	return 0;

	
}

