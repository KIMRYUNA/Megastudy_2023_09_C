#include<iostream>//input,ouput stream
using namespace std;

int main() {

	int sum = 0;
	int num = 0;

	for (int i = 0; i < 5; i++) {
		cout << i+1 << " ��°��";
		cin >> num;
		if (num > 0) {
			sum += num;
		}
	}
	

	cout << "���� ������ ����" << sum << endl;


	return 0;

}
