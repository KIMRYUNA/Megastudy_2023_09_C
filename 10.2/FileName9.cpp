/*
�������� : Ŭ���� ���� ��������� �Լ��� ���� ������ �����ϱ� ���� �������� ������ ���.
1)public:
2)private:
3)protected:
������ ���а� ĸ��ȭ�� �����Ͽ� ��ü�� ���� ��ȣ

ex code)

class Circle{

private:
	double radius;

public:
	void setRadius(double r){
		if(r<0){
		printf("�ȵ�");
		else{
		radius=r;
		}

double getArea()
{
return 3.14*radius*radius;
};


*/


/*
1. ����������(member�� private)
2. ��ȿ���˻� set����� �Է°� ��ȿ�� ����¥�� �˻� ����
3. ������ : Ŭ���� ���� ���� ����ǵ� , set �������̽� ���� ����


*/


/*

*this ����Ʈ
	void eatingSome(int energy) {
		cout << "�ȳ� ���̵�" << endl;
		this->energy += energy;          //this�ϰ�.������ ��.
		this->bark();
	}
	void bark() {
		cout << "�۸�" << endl;
		energy -= 10;
	}
*/