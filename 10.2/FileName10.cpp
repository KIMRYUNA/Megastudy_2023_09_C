#include<iostream>
#include<string>
using namespace std;

class Damakozi {

private:
	string name;
	int age;

public:
	//������ �Լ�
	Damakozi(string inputName, int inputAge) :name(inputName), age(inputAge) {
	}

    //�Ϲ� �Լ�
	void introduce() {
		cout << "Hello my name is " << this->name<< endl;
		cout << "Hello my age is " << this->age << endl;
	}


};




int main() {
	Damakozi megamon("megamon",30);
	megamon.introduce();
	return 0;
}