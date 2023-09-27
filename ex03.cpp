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
		printf("±ÍÇÏ´Â ÆËÄÜ X");

	}
	else
	{
		printf("±ÍÇÏ´Â ÆËÄÜ O");
	}
}



int main() {
	enum Day a = FRIDAY; //ctrl+space ´©¸£¸é ³ª¿È. 

	if (a == FRIDAY) {
		printf("ºÒ±Ý ÆÄÆÃ\n");

	}
	else {
		printf("³¡\n");
	}


	struct CGVMember jenny = { "jenny mega",GOLD };
	canHegetPOPcorn(jenny.tier);
	return 0;

}
