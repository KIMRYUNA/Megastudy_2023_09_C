#include<iostream>
#include<string>
using namespace std;

//***** 클래스 이름은 앞글자 대문자 필수.
class Dog{

public:
	string name;
	int age;
	int energy;

public:
	void showEnergy() {
		cout << "현재 체력은 " << energy << "입니다." << endl;
	}
	void eating() {
		cout << "냠냠 마이따" << endl;
		energy += 10;
	}
	void eatingSome(int energy) {
		cout << "냠냠 마이따" << endl;
		this->energy += energy;          //this하고.찍으면 됨.
		this->bark();
	}
	void bark() {
		cout << "멍멍" << endl;
		energy -= 10;
	}
};


int main() {

	Dog dog1;//int a와 같은거
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

//TV 클래스
// 변수는 powerOn(0이면 꺼짐,1이면 켜짐),chanel,volume;
//함수는 tv끄기.tv켜기. 볼륨 올리기, 볼륨 내리기;