#include<stdio.h>
int main() {

	int n=0;
	
	scanf_s("%d", &n);

		
		if (n < 0) {
			printf("cold");

		}
		else if (0 <= n < 41) {
			printf("moderate");

		}
		else
		{
			printf("hot");
		}
}


