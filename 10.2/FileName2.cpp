
//무작위 숫자 입력받고 합 구하기

#include<iostream>//input,ouput stream
using namespace std;

int main() {

	int sum = 0;
	int n;
	cout << "정수를 입력하세요(0은 종료입니다)"<<"\n";

	//for문을 끝을 알때, while은 모를때 
	
	while (true) {
		
		cin >> n;
		if (n == 0) break;
		sum += n;

	}
	cout << "총 합은 " << sum << "입니다." << endl;
	return 0;
}