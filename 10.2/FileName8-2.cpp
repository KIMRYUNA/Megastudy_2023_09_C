#include<iostream>
#include<string>
using namespace std;
//***** Ŭ���� �̸��� �ձ��� �빮�� �ʼ�.
class TV {

private:
	bool powerOn;
	int chanel;
	int volume;

public:
	void TvOn() {
		powerOn = 1;
	}
	void TvOff() {
		powerOn = 0;
	}


public:
	void VolumeUp() {
		volume++;
	}
	void VolumeDown() {
		volume --;
	}
	void SetChannel(int a) {
		if (a < 0) {
			cout << "������ �߸� �ϼ̽��ϴ�." << endl;
		}
		else chanel = a;
	}
};


int main() {

	TV lg;//int a�� ������
	lg.SetChannel(200);//private�� �ƴ� public���� ������ �ܺο��� �� �ٲٱ� ����.
	lg.chanel = 10;//private �����ϴϱ� ���ٲ�!!!!(�ܺ� ���� ���X)
	//�ּ��� ���� ���� �����ϸ� �ڵ��ؾ���. 
	//���� ���Ժ��ٴ� �Լ��θ��� �����ϸ� ���� �� �����־ ����
	lg.SetChannel(-20);
	return 0;
}

// ������ powerOn(0�̸� ����,1�̸� ����),chanel,volume;
//�Լ��� tv����.tv�ѱ�. ���� �ø���, ���� ������;