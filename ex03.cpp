#include <stdio.h>
enum Day {
	MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY
};



enum Grade {
	BRONZE, SILVER, GOLD, DIAMOND, VIP, VVIP
};

struct CGVMember {
	char nickname[100];
	enum Grade tier;

};

void canHegetPOPcorn(enum Grade a) {
	if (a == BRONZE || a == SILVER) {
		printf("���ϴ� ���� X");

	}
	else
	{
		printf("���ϴ� ���� O");
	}
}



int main() {
	enum Day a = FRIDAY; //ctrl+space ������ ����. 

	if (a == FRIDAY) {
		printf("�ұ� ����\n");

	}
	else {
		printf("��\n");
	}


	struct CGVMember jenny = { "jenny mega",GOLD };
	canHegetPOPcorn(jenny.tier);
	return 0;

}
