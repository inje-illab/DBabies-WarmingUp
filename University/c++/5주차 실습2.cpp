#include<iostream>
using namespace std;

class Sample {
private:
	int* p;
	int size;
public:
	Sample(int n) {
		size = n;
		p = new int[n];
	}
	~Sample() {
		delete p;
	}

	void read();
	void write();
	int big();
};
void Sample::read() {
	for (int i = 0; i < size; i++) {
		cin >> p[i];
	}
}

void Sample::write() {
	for (int i = 0; i < size; i++) {
		cout << p[i] << " ";
	}
	cout << endl;
}

int Sample::big() {
	int max = 0;
	for (int i = 0; i < size; i++) {
		if (p[i] > max) { max = p[i]; }
	}

	return max;
}


int main() {
	Sample s(10);
	s.read();
	s.write();
	cout << "가장 큰 숫자는 " << s.big() << endl;

}