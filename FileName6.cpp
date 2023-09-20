#include<stdio.h>
int main() {

	int arr[3] = { 1,2,3 };
	int(*pa)[3] = &arr;

	for (int i = 0; i < 3; i++) {
		printf("%d\n", (*pa)[i]);
	}

	return 0;
}
