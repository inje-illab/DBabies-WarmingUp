#include<iostream>
#include<time.h>
using namespace std;

//4장 14번

class Player {
private:
	string name;

public:
	Player();
	string Player_name();
	void get_Player_name(string str);

};
Player::Player() {
	name = "";
}
string Player::Player_name() {
	return name;
}

void Player::get_Player_name(string str) {
	name = str;
}

class GamlingBame {
private:
	Player *P;

public:
	GamlingBame();
	~GamlingBame();

	void play();
};
GamlingBame::GamlingBame() {
	P = new Player[2];

	string tmp_name;
	cout << "첫 번째 선수 이름 >> ";
	cin >> tmp_name;
	P[0].get_Player_name(tmp_name);

	cout << "두 번째 선수 이름 >> ";
	cin >> tmp_name;
	P[1].get_Player_name(tmp_name);
}

GamlingBame::~GamlingBame() {
	delete[] P;
}

void GamlingBame::play() {
	int arr[3]{ 0 };
	char a[2];
	int cnt = 2;

	while (1) {
		int num = cnt % 2;

		for (int i = 0; i < 3; i++) {
			arr[i] = rand() % 3;
		}

		if (num == 0) {
			cout << P[num].Player_name() << ": <Enter>";
			cin.getline(a, 1);

			cout << "\n\t\t\t\t" << arr[0] << "\t" << arr[1] << "\t" << arr[2] << "\t";

			if (arr[0] == arr[1] && arr[1] == arr[2]) {
				cout << P[num].Player_name() << "님 승리!!\n";
				return;
			}
			else {
				cout << "아쉽군요!\n";

			}
		}

		else {
			cout << P[num].Player_name() << ": <Enter>";
			cin.getline(a, 1);


			cout << "\n\t\t\t\t" << arr[0] << "\t" << arr[1] << "\t" << arr[2] << "\t";

			if (arr[0] == arr[1] && arr[1] == arr[2]) {
				cout << P[num].Player_name() << "님 승리!!\n";
				return;
			}
			else {
				cout << "아쉽군요!\n";
			}
		}

		cnt++;
	}
}

int main() {
	srand(time(NULL));
	GamlingBame game;

	game.play();
}