// namespace std;
// 이름 충돌 방지하기 위해 코드의 특정 부분을 분리
//1. 코드의 구조화 2. 조직화 도움. 

#include<iostream>//input,ouput stream
using namespace std;

namespace MyNamespcae {
	int value = 10;
	void display() {
		printf("inside MyNamespace\n");
	}
}

int main() {
	printf("%d  ", MyNamespcae::value );//::스코프 연산자, 네임스페이스 내부 요소 호출
	MyNamespcae::display();
	return 0;

}
