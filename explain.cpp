#include <stdio.h>
enum Day {
	MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY
};



enum Grade {
	BRONZE,SILVER,GOLD,DIAMOND,VIP,VVIP
};

struct CGVMember {
	char nickname[100];
	enum Grade tier;

};


int main() {
	enum Day a = FRIDAY; //ctrl+space 누르면 나옴. 
	
	if (a == FRIDAY) {
		printf("불금 파팅\n");

	}
	else{
	printf("끝\n");
	}


	struct CGVMember jenny = {"jenny mega",GOLD};
	return 0;

}

//enum (열거형 상수!!) 연속된 정수값을 자동으로 할당 ** 주로 유한한 값 제한