#include<iostream>
#include<string>
using namespace std;

// ����/�迭 -> ����ü
// [���(�ݺ�/����)��] -> �Լ�
// ����ü + �Լ� => Ŭ����

class car{
private: //��� ����(���)
	string name;
	int price;
	string color;
	int gasolin;


public: //��� �Լ�(����)
	//������ == �ʱ�ȭ
	car() { // �̸� �ֱ�
		this->name = "avante";
		this->color = "red";
		this->price = 2000;
		this->gasolin = 100;
	}

	car(string name_what,string color_what) {
		// �Է� �ޱ�

		this->name = name_what;
		this->color = color_what;
		this->price=2000;
		this->gasolin = 100;
	}

	void info() {

		cout << this->name << endl;
		cout << this->color<< endl;
		cout << this->price << endl;
		cout << this->gasolin << endl;
	}

	void driving() {
		cout << "�θ��θ�~" << endl; 
		this->gasolin -= 10;
	}
};

int main() {

	car car1;
	car1.info();

	car car2("tesla", "black");
	car2.driving();
	car2.info();




	return 0;
}