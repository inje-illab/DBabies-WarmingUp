#include<iostream>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);

	int num = 0, money = 0, cnt = 0;
	cin >> num >> money;

	int* arr = (int*)malloc(sizeof(int) * num);

	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}

	num--;
	while (money > 0) {
		if (arr[num] <= money) {
			money -= arr[num];
			cnt++;
		}
		else {
			num--;
		}
	}cout << cnt;
}