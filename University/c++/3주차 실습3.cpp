#include<iostream>
#include<string>
using namespace std;
//91쪽 10번
int main() {
	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		for (int j = 0; j <= i; j++) {
			cout << str[j];
		}
		cout << "\n";
	}
}