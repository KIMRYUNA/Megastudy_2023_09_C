#include<iostream>
#include<string>
using namespace std;

class Cat {

//멤버 변수
private:
	
	string name;//이름
	string kind;//품종
	int age;//나이
	string gender;//성별
	int power;//체력

	
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

	Cat choco("choco", "페르시안",30,"여자",100);
	choco.introduce();
	choco.eat();
	choco.eat();

	return 0;
}
