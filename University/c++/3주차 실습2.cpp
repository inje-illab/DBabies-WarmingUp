#include<iostream>
#include<string>
using namespace std;

//90쪽 8번

int main() {
	cout << "5명의 이름을 ';'으로 구분하여 입력하세요.\n";
	int num = 5, max=0;
	char str[5][100];
	char* tmp= nullptr;

	for (int i = 0; i < num; i++) {
		cin.getline(str[i], 100, ';');
	}

	for (int i = 0; i < num; i++) { //가장 긴 이름을 찾기 및 저장
		if (max < strlen(str[i])) {
			max = strlen(str[i]);
			tmp = str[i];
		}
	}

	for (int i = 0; i < num; i++) {
		cout << i + 1 << " : " << str[i] << "\n";
	}
	cout << "가장 긴 이름은 " << tmp;

}