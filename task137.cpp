#include<ctime>
#include <iostream>                //137
using namespace std;
int main() {
	string arrs[6] = { "rock and rock = ","rock and paper = ","rock and scissors = ","paper and paper = ","paper and scissors = ","scissors and scissors = " };
	int arri[6] = { 0,0,0,0,0,0 };
	int n, player, computer, playerwin = 0;
	cout << "1 = Rock; 2 = Paper; 3 = Scissors" << endl;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> player;
		srand(time(NULL));
		computer = rand() % (3) + 1;
		cout << computer << endl;

		if (player == 1 && computer == 1) {
			arri[0]++;
		}
		else if (player == 1 && computer == 2) {
			arri[1]++;
		}
		else if (player == 1 && computer == 3) {
			arri[2]++;
			playerwin++;
		}
		else if (player == 2 && computer == 2) {
			arri[3]++;
		}
		else if (player == 2 && computer == 3) {
			arri[4]++;
		}
		else if (player == 3 && computer == 3) {
			arri[5]++;;
		}
		else if (player == 2 && computer == 1) {
			arri[1]++;
			playerwin++;
		}
		else if (player == 3 && computer == 1) {
			arri[2]++;
		}
		else if (player == 3 && computer == 2) {
			arri[4]++;
			playerwin++;
		}
	}
	cout << "Player win: " << playerwin << endl;
	cout << "Move Statistics: " << endl;
	for (int i = 0; i < 6; i++) {
		cout << arrs[i] << arri[i] << endl;
	}
}