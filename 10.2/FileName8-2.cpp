#include<iostream>
#include<string>
using namespace std;
//***** 클래스 이름은 앞글자 대문자 필수.
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
			cout << "설정을 잘못 하셨습니다." << endl;
		}
		else chanel = a;
	}
};


int main() {

	TV lg;//int a와 같은거
	lg.SetChannel(200);//private이 아닌 public으로 했으면 외부에서 막 바꾸기 가능.
	lg.chanel = 10;//private 선언하니까 못바꿈!!!!(외부 접근 허용X)
	//최소한 원래 값은 보존하며 코딩해야함. 
	//직접 대입보다는 함수로만들어서 대입하면 원래 값 남아있어서 안전
	lg.SetChannel(-20);
	return 0;
}

// 변수는 powerOn(0이면 꺼짐,1이면 켜짐),chanel,volume;
//함수는 tv끄기.tv켜기. 볼륨 올리기, 볼륨 내리기;