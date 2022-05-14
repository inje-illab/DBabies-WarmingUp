#include<iostream>
#include<string>
#include<map>
using namespace std;
//94쪽 16번
int main() {
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n텍스트의 끝은 ; 입니다. 10000개까지 가능합니다.\n";
	char str[10000];
	map<char, int> m;
	int total_cnt = 0;

	cin.getline(str, 10000, ';');
	int str_len = strlen(str);

	for (int i = 'a'; i <= 'z'; i++) {//맵 초기화
		m.insert(make_pair((char)i, 0));
	}

	for (int i = 0; i < str_len; i++) { //알파벳 개수 및 총개수
		str[i] = tolower(str[i]);

		if ( str[i] >= 'a' && str[i] <= 'z') {
			total_cnt++; 
		}

		for (auto j = m.begin(); j != m.end(); ++j) {
			if (str[i] == j->first) {
				j->second++;
				break;
			}
		}
	}

	cout << "총 알파벳 수 :" << total_cnt << "\n\n";
	for (int i = 'a'; i <= 'z'; i++) {
		cout << (char)i << " (" << m[i]<< ")	: ";
		for (int j = 0; j < m.find(i)->second; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}