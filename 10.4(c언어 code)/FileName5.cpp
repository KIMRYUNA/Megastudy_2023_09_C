// **** 얕은 복사, 깊은 복사
/*
얕은 복사 : 멤버 변수에 포인터만 복사, 따라서 원래 객체와 복사된 객체가
동일한 메모리 주소 참조(똑같은 곳을 가리키기만 함, 메모리 해체되면 이미 해체된 메모리 참조)

문제점  
1)원본 객체나 복사된 객체 중 하나가 수정되면, 함께 변경됨. 
2)원본 객체나 복사된 객체 중 하나가 소멸될 때 메모리 해제하면 이미 해제된 메모리 참조
*/

/* 깊은 복사 : 아예 통째로 실제값 복사.
 값 바뀌면 반영 X. 아예 같은 값으로 다른 박스 생성.

 문제점 
 1) 원본 객체와 복사된 객체는 독립적.
 2) 한 객체가 수정되거나 소멸되어도 다른 객체에는 영향 X.
*/


/*
int ->기본 타입
다른 거 -> 참조 타입
*/

#include<iostream>
using namespace std;

class Shallow {
private:
	int* data;
	//new int 배열 하나줌. 
public:
	Shallow(int d) {
		data = new int;
		*data = d;

	}
	Deep(int d) {
		data = new int;
		*data = d;

	}
	Deep(Deep& source) {
		data = new int;
		*data = *source.data;


	}
	void changeData(int d) {
		*data = d;

	}
	void print() {
		cout << *data << endl;

	}
};

int main() {
	Shallow original(10);
	Shallow copy = original;
	copy.changeData(20);
	original.print();
	copy.print();
	return 0;
}