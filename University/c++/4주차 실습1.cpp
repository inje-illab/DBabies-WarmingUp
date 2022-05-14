#include<iostream>
#include<ctime>
using namespace std;
//3장 7번문제


class SelectableRandom {
private:
	int a, b; //a부터b까지

public:
	SelectableRandom() {  a = 0; b = 0; }
	SelectableRandom(int a, int b) { this->a = a; this->b = b; }
	~SelectableRandom(){}

	void print_even();
	void print_odd();
	
};

void SelectableRandom::print_even(){//짝수 정수
	int Rand = 0,cnt=0;
	cout << a << "에서 " << b << "까지의 짝수 램덤 정수 10개--" << endl;
	
	while (cnt < 10) {
		Rand = rand() % (b + 1 - a) + a;

		if (Rand % 2 == 0) {
			cout << Rand << " ";
			cnt++;
		}
	}

	cout << "\n\n";
}

void SelectableRandom::print_odd() {//홀수 정수
	int Rand = 0, cnt = 0;
	cout << a << "에서 " << b << "까지의 홀수 램덤 정수 10개--" << endl;

	while (cnt < 10) {
		Rand = rand() % (b + 1 - a) + a;

		if (Rand % 2 == 1) {
			cout << Rand << " ";
			cnt++;
		}
	}
	cout << "\n\n";
}

int main() {
	srand(time(NULL));

	SelectableRandom one(0,32767),two(2,9);
	one.print_even();
	two.print_odd();

	return 0;
}