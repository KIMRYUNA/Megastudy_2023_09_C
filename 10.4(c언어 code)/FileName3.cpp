#include<iostream>
#include<string>
using namespace std;

// ����/�迭 -> ����ü
// [���(�ݺ�/����)��] -> �Լ�
// ����ü + �Լ� => Ŭ����

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
		// �Է� �ޱ�
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
			// this->h++ ����
			increaseHour();
		}
	}

	void increaseSecond() {
		this->s++;
		if (this->s >= 60) {
			this->s = 0;
			// this->m++ ����
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
		cout << (h < 10 ? "0" : "") << h << ":"//10���� ������ �տ� 0�� �ٿ��ֱ�
			//?�������� ������ ���� ����
			//�ƴϸ� ������ ����
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