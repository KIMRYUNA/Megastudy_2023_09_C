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
	enum Day a = FRIDAY; //ctrl+space ������ ����. 
	
	if (a == FRIDAY) {
		printf("�ұ� ����\n");

	}
	else{
	printf("��\n");
	}


	struct CGVMember jenny = {"jenny mega",GOLD};
	return 0;

}

//enum (������ ���!!) ���ӵ� �������� �ڵ����� �Ҵ� ** �ַ� ������ �� ����