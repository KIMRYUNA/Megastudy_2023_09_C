//���� and ���� �Ҵ�
//���� �Ҵ� : ���α׷� ����Ǳ� �� ������ ũ��� ��ġ�� �̹� ������. 
// ���� �Ҵ� : dynamic �Ҵ� (���÷�� �ȷο�, ī�� ģ����)
//c++������ new�� delete ������ ����� �������� �޸� �Ҵ��ϰ� ����



#include<iostream>
using namespace std;

int main() {
	int n;
	std::cout << "Enter the number of elements: ";
	std::cin >> n;

	//�������� �迭 �Ҵ�
	int* arr = new int[n]; //���� �Ҵ� n��ŭ �Ҵ� ��������Ʈ �˷���.
	for (int i = 0; i < n; i++) {
		arr[i] = i;
		std::cout << arr[i] << "";
	}


	//�Ҵ�� �޸� ����
	delete[] arr;

	return 0;


}

