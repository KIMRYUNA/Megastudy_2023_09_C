// 약수 구하기 함수


#include<iostream>//input,ouput stream
using namespace std;

int main() {

	int n = 0;
	cout << "양의 정수를 입력하세요";
	cin >> n;
	int i = 0;
	
	if (n <= 0)
	{
		cout << "양의 정수가 아닙니다" << endl<<"\n";
		return 1;

	}

	cout << n << "의 약수는";

		for (int i = 1; i <= n; i++) {
			if (n % i == 0) { 
				 cout<< i << endl;
			}
		}

		cout << endl;
		return 0;

}