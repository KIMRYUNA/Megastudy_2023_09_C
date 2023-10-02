/*
접근제어 : 클래스 내에 멤버변수와 함수에 대한 접근을 제한하기 위해 접근제어 지시자 사용.
1)public:
2)private:
3)protected:
데이터 은닉과 캡슐화를 제공하여 객체의 상태 보호

ex code)

class Circle{

private:
	double radius;

public:
	void setRadius(double r){
		if(r<0){
		printf("안돼");
		else{
		radius=r;
		}

double getArea()
{
return 3.14*radius*radius;
};


*/


/*
1. 데이터은닉(member는 private)
2. 유효성검사 set사용해 입력값 유효성 로직짜서 검사 가능
3. 유연성 : 클래스 내부 구현 변경되도 , set 인터페이스 유지 가능


*/


/*

*this 포인트
	void eatingSome(int energy) {
		cout << "냠냠 마이따" << endl;
		this->energy += energy;          //this하고.찍으면 됨.
		this->bark();
	}
	void bark() {
		cout << "멍멍" << endl;
		energy -= 10;
	}
*/