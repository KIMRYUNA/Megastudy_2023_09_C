#include<iostream>
#include<string>
using namespace std;

//***** Ŭ���� �̸��� �ձ��� �빮�� �ʼ�.
class TV {

public:
	bool powerOn;
	int chanel;
	int volume;


public:
	void showVolume() {
		cout << "���� ������ " << volume << "�Դϴ�." << endl;
	}

public:
	void ShowTV() {
		if(powerOn==0)
		cout << "���� TV�� " << "�����ֽ��ϴ�." << endl;
		if (powerOn == 1)
			cout << "���� TV�� " << "�����ֽ��ϴ�." << endl;
	}

public:
	void TvOn() {
		cout << "Ƽ�� �մϴ�" << endl;
		powerOn = 1;
	}
	void TvOff() {
		cout << "Ƽ�� ���ϴ�" << endl;
		powerOn = 0;
	}


public:
	void VolumeUp() {
		cout << "������ �ø��ϴ�" << endl;
		volume += 1;
	}
	void VolumeDown() {
		cout << "������ �����ϴ�" << endl;
		volume -= 1;
	}
};


int main() {

	TV RyunTv;//int a�� ������
	RyunTv.powerOn = 1;
	RyunTv.chanel = 10;
	RyunTv.volume = 20;
	RyunTv. TvOff();
	RyunTv.VolumeUp();
	RyunTv.showVolume();
	RyunTv.ShowTV();
	return 0;
}

// ������ powerOn(0�̸� ����,1�̸� ����),chanel,volume;
//�Լ��� tv����.tv�ѱ�. ���� �ø���, ���� ������;