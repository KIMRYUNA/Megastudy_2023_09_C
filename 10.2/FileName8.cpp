#include<iostream>
#include<string>
using namespace std;

//***** 클래스 이름은 앞글자 대문자 필수.
class TV {

public:
	bool powerOn;
	int chanel;
	int volume;


public:
	void showVolume() {
		cout << "현재 볼륨은 " << volume << "입니다." << endl;
	}

public:
	void ShowTV() {
		if(powerOn==0)
		cout << "현재 TV는 " << "꺼져있습니다." << endl;
		if (powerOn == 1)
			cout << "현재 TV는 " << "켜져있습니다." << endl;
	}

public:
	void TvOn() {
		cout << "티비를 켭니다" << endl;
		powerOn = 1;
	}
	void TvOff() {
		cout << "티비를 끕니다" << endl;
		powerOn = 0;
	}


public:
	void VolumeUp() {
		cout << "볼륨을 올립니다" << endl;
		volume += 1;
	}
	void VolumeDown() {
		cout << "볼륨을 내립니다" << endl;
		volume -= 1;
	}
};


int main() {

	TV RyunTv;//int a와 같은거
	RyunTv.powerOn = 1;
	RyunTv.chanel = 10;
	RyunTv.volume = 20;
	RyunTv. TvOff();
	RyunTv.VolumeUp();
	RyunTv.showVolume();
	RyunTv.ShowTV();
	return 0;
}

// 변수는 powerOn(0이면 꺼짐,1이면 켜짐),chanel,volume;
//함수는 tv끄기.tv켜기. 볼륨 올리기, 볼륨 내리기;