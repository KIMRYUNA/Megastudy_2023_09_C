#include<iostream>
#include<string>
using namespace std;

//***** Ŭ���� �̸��� �ձ��� �빮�� �ʼ�.
class Dog{

public:
	string name;
	int age;
	int energy;

public:
	void showEnergy() {
		cout << "���� ü���� " << energy << "�Դϴ�." << endl;
	}
	void eating() {
		cout << "�ȳ� ���̵�" << endl;
		energy += 10;
	}
	void eatingSome(int energy) {
		cout << "�ȳ� ���̵�" << endl;
		this->energy += energy;          //this�ϰ�.������ ��.
		this->bark();
	}
	void bark() {
		cout << "�۸�" << endl;
		energy -= 10;
	}
};


int main() {

	Dog dog1;//int a�� ������
	dog1.name = "happy";
	dog1.age = 20;
	dog1.energy = 100;

	dog1.showEnergy();
	dog1.bark();
	dog1.bark();	
	dog1.bark();
	dog1.showEnergy();
	return 0;
}

//TV Ŭ����
// ������ powerOn(0�̸� ����,1�̸� ����),chanel,volume;
//�Լ��� tv����.tv�ѱ�. ���� �ø���, ���� ������;