#include<iostream>
#include<string>
using namespace std;

// 변수/배열 -> 구조체
// [제어문(반복/조건)문] -> 함수
// 구조체 + 함수 => 클래스

class car{
private: //멤버 변수(명사)
	string name;
	int price;
	string color;
	int gasolin;


public: //멤버 함수(동작)
	//생성자 == 초기화
	car() { // 미리 주기
		this->name = "avante";
		this->color = "red";
		this->price = 2000;
		this->gasolin = 100;
	}

	car(string name_what,string color_what) {
		// 입력 받기

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
		cout << "부릉부릉~" << endl; 
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