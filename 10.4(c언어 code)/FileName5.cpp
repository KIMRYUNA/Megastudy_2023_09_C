// **** ���� ����, ���� ����
/*
���� ���� : ��� ������ �����͸� ����, ���� ���� ��ü�� ����� ��ü��
������ �޸� �ּ� ����(�Ȱ��� ���� ����Ű�⸸ ��, �޸� ��ü�Ǹ� �̹� ��ü�� �޸� ����)

������  
1)���� ��ü�� ����� ��ü �� �ϳ��� �����Ǹ�, �Բ� �����. 
2)���� ��ü�� ����� ��ü �� �ϳ��� �Ҹ�� �� �޸� �����ϸ� �̹� ������ �޸� ����
*/

/* ���� ���� : �ƿ� ��°�� ������ ����.
 �� �ٲ�� �ݿ� X. �ƿ� ���� ������ �ٸ� �ڽ� ����.

 ������ 
 1) ���� ��ü�� ����� ��ü�� ������.
 2) �� ��ü�� �����ǰų� �Ҹ�Ǿ �ٸ� ��ü���� ���� X.
*/


/*
int ->�⺻ Ÿ��
�ٸ� �� -> ���� Ÿ��
*/

#include<iostream>
using namespace std;

class Shallow {
private:
	int* data;
	//new int �迭 �ϳ���. 
public:
	Shallow(int d) {
		data = new int;
		*data = d;

	}
	Deep(int d) {
		data = new int;
		*data = d;

	}
	Deep(Deep& source) {
		data = new int;
		*data = *source.data;


	}
	void changeData(int d) {
		*data = d;

	}
	void print() {
		cout << *data << endl;

	}
};

int main() {
	Shallow original(10);
	Shallow copy = original;
	copy.changeData(20);
	original.print();
	copy.print();
	return 0;
}