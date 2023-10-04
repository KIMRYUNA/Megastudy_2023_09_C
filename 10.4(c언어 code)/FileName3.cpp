#include<iostream>
#include<string>
using namespace std;

// 변수/배열 -> 구조체
// [제어문(반복/조건)문] -> 함수
// 구조체 + 함수 => 클래스

class Time {
private:
	int h;
	int m;
	int s;
public:
	Time() {
		this->h = 0;
		this->m = 0;
		this->s = 0;
	}
	Time(int hour_what, int minute_what, int second_what) {
		// 입력 받기
		this->h = hour_what;
		this->m= minute_what;
		this->s = second_what;
	}

	void increaseHour() {
		this->h = (this->h + 1) % 24;
	}
	void increaseMinute() {
		this->m++;
		if (this->m >= 60) {
			this->m = 0;
			// this->h++ 위험
			increaseHour();
		}
	}

	void increaseSecond() {
		this->s++;
		if (this->s >= 60) {
			this->s = 0;
			// this->m++ 위험
			increaseMinute();
		}
	}
	void decreaseHour() {
			h--;
			if (h < 0) {
				h = 23;
			}
		}

	void decreaseMinute() {
		m--;
			if (m< 0) {
				m = 59;
			decreaseHour();
			}
		}
	void decreaseSecond() {
		s--;
		if (s < 0) {
			s = 59;
			decreaseMinute();
		}
	}
	void display() {
		cout << (h < 10 ? "0" : "") << h << ":"//10보다 작으면 앞에 0을 붙여주기
			//?기준으로 맞으면 왼쪽 실행
			//아니면 오른쪽 실행
			<< (m< 10 ? "0" : "") << m << ":"
			<< (h < 10 ? "0" : "") << s <<endl;
	}

};

int main() {
	Time time2(23,50,10);
	time2.decreaseMinute();
	time2.display();
	return 0;
}