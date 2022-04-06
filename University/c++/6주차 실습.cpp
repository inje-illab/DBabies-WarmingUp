#include<iostream>
using namespace std;

//4장 12번

class Circle {
private:
	int radius; //원의 반지름값
	string name; //원의 이름

public:
	Circle();
	void setCircle(string name, int radius); //이름과 반지름 설정
	double getArea();
	string getName();
};

Circle::Circle() { radius = 0; name = ""; }

void Circle::setCircle(string name, int radius) {
	this->name = name;
	this->radius = radius;
}

double Circle::getArea() {
	int set = radius * radius * 3.14;
	return set;
}

string Circle::getName() {
	return name;
}

class CircleManager {
private:
	Circle* p;//Circle 배열의 대한 포인터
	int size; //배열의 크기
	
public:
	CircleManager(int size);//size 크기의 배열을 동적 생성, 사용자로부터 입력 완료
	~CircleManager();
	void searchByName(string Circle_Name);//사용자로부터 원의 이름을 입려받아 면적 출력
	void sreachByArea(double get_area);//사용자로부터 면적을 입력받아 면적보다 큰 원의 이름 출력
};

CircleManager::CircleManager(int size) {
	this->size = size;
	p = new Circle[size];

	for (int i = 0; i < size; i++) {
		cout << "원 " << i + 1 << "의 이름과 반지름 >>";
		string a;
		int b;
		cin >> a >> b;
		p[i].setCircle(a, b);
		cout << endl;
	}
}

void CircleManager::searchByName(string Circle_Name) {
	for (int i = 0; i < size; i++) {
		if (p[i].getName() == Circle_Name) {
			cout << "도넛의 면적은 " << p[i].getArea() << endl;
			break;
		}
	}
}

void CircleManager::sreachByArea(double get_area){
	cout << get_area << "보다 큰 원을 검색합니다.\n";
	for (int i = 0; i < size; i++) {
		if (p[i].getArea() >= get_area) {
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ", ";
		}
	}
	cout << endl;
}

CircleManager::~CircleManager() {
	delete[] p;
} 

int main() {
	int num;
	cout << "원의 개수 >> ";
	cin >> num;

	CircleManager M(num);

	cout << "검색하고자 하는 원의 이름 >> ";
	string Circle_name;
	cin >> Circle_name;
	M.searchByName(Circle_name);

	cout << "최소 면적을 정수로 입력하세요 >>";
	int num2; 
	cin >> num2;
	M.sreachByArea(num2);
}