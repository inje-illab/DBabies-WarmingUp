#include<iostream>
#include<time.h>
using namespace std;
//4장 5번


class rand_change {
private:
	char str[100]; 
	int cnt;
public:
	rand_change() { memset(str, '0', 100); cnt = 0; }
	~rand_change(){}

	void get_str() {
		cin.getline(str,100);
		for (int i = 0; str[i] != '\0'; i++) {
			cnt++;
		}
	}
	void change_str() {
		char ch = 'a' + rand() % 26; //아무 문자를 받는다.
		
		while (1) {
			int change_point = rand() % cnt;
			if (str[change_point] == ' ') {
				continue;
			}
			else {
				str[change_point] = ch;
				break;
			}
		}
	}

	void print_str() {
		for (int i = 0; i < cnt; i++) {
			cout << str[i];
		}
		cout << "\n";
	}

	string ccc() {
		return str;
	}
};


int main() {
	srand(time(NULL));
	rand_change c;
	string sss = "exit";

	while (1) {
		c.get_str();
		if (c.ccc() == sss) {
			break;
		}

		c.change_str();
		c.print_str();
	}
}
