// namespace std;
// �̸� �浹 �����ϱ� ���� �ڵ��� Ư�� �κ��� �и�
//1. �ڵ��� ����ȭ 2. ����ȭ ����. 

#include<iostream>//input,ouput stream
using namespace std;

namespace MyNamespcae {
	int value = 10;
	void display() {
		printf("inside MyNamespace\n");
	}
}

int main() {
	printf("%d  ", MyNamespcae::value );//::������ ������, ���ӽ����̽� ���� ��� ȣ��
	MyNamespcae::display();
	return 0;

}
