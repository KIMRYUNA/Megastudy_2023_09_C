#include<iostream>//input,ouput stream
using namespace std;

int main() {

	int sum = 0;
	int num = 0;

	for (int i = 0; i < 5; i++) {
		cout << i+1 << " 번째수";
		cin >> num;
		if (num > 0) {
			sum += num;
		}
	}
	

	cout << "양의 정수의 합은" << sum << endl;


	return 0;

}
