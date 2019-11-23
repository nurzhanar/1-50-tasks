
#include <iostream>                 //138
#include <ctime>
using namespace std;
int main() {
	srand(time(NULL));
	int counter = 0, line = 0;
	string line1 = "";
	string line2 = "";
	string line3 = "";
	int a;
	while (line != 5) {
		a = rand() % 2;
		if (a == 0) {
			cout << 0;
			line++;
		}
		else if ((a == 1) && (counter < 1)) {
			cout << 1;
			line++;
			counter++;
		}
	}
	while (line != 10) {
		a = rand() % 2;
		if (a == 0) {
			cout << 0;
			line++;
		}
		else if ((a == 1) && (counter < 3)) {
			cout << 1;
			line++;
			counter++;
		}
	}
	while (line != 15) {
		a = rand() % 2;
		if (a == 0) {
			cout << 0;
			line++;
		}
		else if ((a == 1) && (counter < 3)) {
			cout << 1;
			line++;
			counter++;
		}
	}
}