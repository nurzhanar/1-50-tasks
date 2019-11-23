#include <iostream>                     //139
#include <ctime>
using namespace std;
int main() {
	srand(time(NULL));
	int counter2 = 0, counter3 = 0, counteri3 = 0, counteri2 = 0, a;
	for (int i = 1; i <= 10; i++) {
		a = rand() % 3 + 1;
		cout << a;
		if (a == 2)
			counter2++;
		if (a == 3)
			counter3++;
		if ((i % 2 == 0) && (a == 3))
			counteri3++;
		if ((i <= 5) && (a == 2))
			counteri2++;
	}
	cout << endl;
	if (counter2 >= counter3)
		cout << "a) Number of 2 bigger than number of 3 by: " << counter2 - counter3 << endl;
	else
		cout << "a) Number of 3 bigger than number of 2 by: " << counter3 - counter2 << endl;
	cout << "b) Number of 3 that are located on even positions: " << counteri3 << endl;
	cout << "c) Number of 2 that are located on first 5 positions: " << counteri2 << endl;
}