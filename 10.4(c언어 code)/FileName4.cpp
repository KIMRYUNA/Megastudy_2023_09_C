//정적 and 동적 할당
//정적 할당 : 프로그램 실행되기 전 변수의 크기와 위치가 이미 결정됨. 
// 동적 할당 : dynamic 할당 (인플루언서 팔로우, 카톡 친구수)
//c++에서는 new와 delete 연산자 사용해 동적으로 메모리 할당하고 해제



#include<iostream>
using namespace std;

int main() {
	int n;
	std::cout << "Enter the number of elements: ";
	std::cin >> n;

	//동적으로 배열 할당
	int* arr = new int[n]; //동적 할당 n만큼 할당 시작포인트 알려줌.
	for (int i = 0; i < n; i++) {
		arr[i] = i;
		std::cout << arr[i] << "";
	}


	//할당된 메모리 해제
	delete[] arr;

	return 0;


}

