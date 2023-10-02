//using문: 네임스페이스의 모든 요소,특정 요소 현재 스코프로 가져옴

#include<iostream>//input,ouput stream
using namespace std;

namespace MyNamespcae {
	void display() {
		printf("inside MyNamespace\n");
	}
}

using namespace MyNamespcae;

int main() {
	display();
}
