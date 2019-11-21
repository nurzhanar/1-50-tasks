#include <iostream>
using namespace std;
int main() {
	int d, m, y;
	cin >> d >> m >> y;
	bool exist = false;
	if ((d<30 && d>0) && (m==4 || m==6 || m == 9 || m == 11) ) {
		exist = true;
	}else if ((d < 31 && d>0) && (m == 1 || m == 3|| m == 5 || m == 7 || m == 8 || m == 10 || m == 12)) {
		exist = true;
	}else if (m == 2) {
		if (y % 400 == 0) {
			if (d < 28) {
				exist = true;
			}
		}
		else if (d < 29) {
			exist = true;
		}
	}
	if (exist == true) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	return 0;
}
