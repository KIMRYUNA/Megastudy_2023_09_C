// ��� ���ϱ� �Լ�


#include<iostream>//input,ouput stream
using namespace std;

int main() {

	int n = 0;
	cout << "���� ������ �Է��ϼ���";
	cin >> n;
	int i = 0;
	
	if (n <= 0)
	{
		cout << "���� ������ �ƴմϴ�" << endl<<"\n";
		return 1;

	}

	cout << n << "�� �����";

		for (int i = 1; i <= n; i++) {
			if (n % i == 0) { 
				 cout<< i << endl;
			}
		}

		cout << endl;
		return 0;

}