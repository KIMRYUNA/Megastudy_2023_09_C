//코드 잘못짬 


#include<iostream>
#include<string>
using namespace std;

// 변수/배열 -> 구조체
// [제어문(반복/조건)문] -> 함수
// 구조체 + 함수 => 클래스

class Time {
private: 
	int hour;//시
	int minute;//분
	int second;//초

public: 

	Time() { 
		this->hour = 0;
		this->minute = 0;
		this->second = 0;
	}

	Time(int hour_what, int minute_what, int second_what) {
		// 입력 받기
		this->hour = hour_what;
		this->minute = minute_what;
		this->second= second_what;
	}

	void increaseHour() {
	
		if (hour == 23) {
			hour = 0;
		}
		else {
		this->hour += 1;
		}
		
		
	}
	void increaseMinute() {
		if (minute >= 59) {
			minute = 0;
			hour++;
		}
		else {
		this->minute += 1;
		}
	
		
	}
	void increaseSecond() {
		
		if (second >= 59) {
			second = 0;
			increaseMinute();
		}
		else {
			this->second += 1;
		}
		
	}
	void decreaseHour() {

	
		if (hour==0) {
			hour = 23;
		}
		else {
			this->hour -= 1;
		}
	}
	void decreaseMinute() {

		
		if (minute==0) {
			minute = 59;
			hour--;
		}
		else {

			this->minute -= 1;
		}
	}
	void decreaseSecond() {
		if (second == 0) {
			second = 59;
			minute--;
		}
		
		else {
		this->second -= 1;
		}
		
		
	}

	void display() {
		if (hour < 10) {
			cout << "0" << this->hour<<":";
		}
		else {
			cout << this->hour << ":";
		}

		if (minute < 10) {
			cout << "0" << this->minute << ":";
		}
		else {
			cout << this->minute << ":";
		}

		if (second < 10) {
			cout << "0" << this->second ;
		}
		else {
			cout << this->second ;
		}
	}


};

int main() {
	Time time2(23,59,59);
	time2.increaseSecond();
	
	

	time2.display();
	return 0;
}