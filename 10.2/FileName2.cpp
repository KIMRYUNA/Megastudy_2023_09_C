
//������ ���� �Է¹ް� �� ���ϱ�

#include<iostream>//input,ouput stream
using namespace std;

int main() {

	int sum = 0;
	int n;
	cout << "������ �Է��ϼ���(0�� �����Դϴ�)"<<"\n";

	//for���� ���� �˶�, while�� �𸦶� 
	
	while (true) {
		
		cin >> n;
		if (n == 0) break;
		sum += n;

	}
	cout << "�� ���� " << sum << "�Դϴ�." << endl;
	return 0;
}