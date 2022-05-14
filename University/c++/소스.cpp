#include<iostream>
using namespace std;
//5장 12번
class Dept {
private:
	int size; //scores 배열의 크기
	int* scores;//동적 할당 받을 정수 배열의 주소

public:
	Dept(int size) {
		this->size = size;
		scores = new int[size];
	}

	~Dept() {
		delete scores;
	}
	int getsize() { return size; }
	void read();//size만큼 키보드에서 정수를 읽어 scores 배열에 저장
	bool isover60(int index); //index의 학생의 성적이 60보다 크면 true 리턴
};

void Dept::read() {
	int num = 0;
	cout << "10개 점수 입력" << endl;

	for (int i = 0; i < size; i++) {
		cin >> num;
		scores[i] = num;
	}
}

bool Dept::isover60(int index) {
	if (scores[index] > 60) { return 1; }
	else { return 0; }
}

int countpass(Dept &dept) {//복사생성을 이용한다.
	//dept 학과에 60점 이상으로 통과하는 학생의 수 리턴
	int count = 0;
	for (int i = 0; i < dept.getsize(); i++) {
		if (dept.isover60(i))
			count++;
	}
	return count;
}

int main() {
	Dept com(10);//초 10명이 있는 학과
	com.read(); //총 10명의 학생들의 성적을 키보드로부터 읽어 scores 배열에 저장
	int n = countpass(com);//com 학과에 60점 이상으로 통과한 학생의 수를 리턴
	cout << "60점 이상은 " << n << "명";
}