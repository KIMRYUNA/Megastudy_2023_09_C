//using��: ���ӽ����̽��� ��� ���,Ư�� ��� ���� �������� ������

#include<iostream>//input,ouput stream
using namespace std;

namespace MyNamespcae {
	void display() {
		printf("inside MyNamespace\n");
	}
}

using namespace MyNamespcae;

int main() {
	display();
}
