#include<iostream>
#include<string>
using namespace std;

class Cat {

//��� ����
private:
	
	string name;//�̸�
	string kind;//ǰ��
	int age;//����
	string gender;//����
	int power;//ü��

	
public:
	Cat(string inputName, string inputKind,int inputAge,string inputGender,int inputPower) :name(inputName), kind(inputKind),age(inputAge),gender(inputGender),power(inputPower)
	{
	}

	void introduce() {
		cout << "Hello my name is " << this->name << endl;
		cout << "Hello my kind is " << this->kind << endl;
		cout << "Hello my age is " << this->age << endl;
		cout << "Hello my gender is " << this->gender << endl;
		cout << "Hello my power is " << this->power<< endl;
	}

	void sleep() {

		power++;
		if (power >= 100) {
			cout << "stop sleep" << endl;

		}
	}
	void eat() {

		power++;
		if (power >=100) {
			cout << "stop eating" << endl;

		}
	}
	void playwithme() {

		power--;

		if (power <= 0) {
			cout << "die"<<endl;

		}

	}

};


int main() {

	Cat choco("choco", "�丣�þ�",30,"����",100);
	choco.introduce();
	choco.eat();
	choco.eat();

	return 0;
}
