//self code

#include<iostream>
using namespace std;

struct Tv {
	bool powerOn;
	int channel;
	int volume;

	void setVolume(int vol) {
		if (vol >= 0 && vol <= 100) {
			volume = vol;
		}
	}
};

int main() {
	Tv mytv;
	mytv.powerOn = true;
	mytv.channel = 10;
	mytv.volume = 200;
	cout << mytv.powerOn<< endl << mytv.channel <<endl<< mytv.volume;

}



