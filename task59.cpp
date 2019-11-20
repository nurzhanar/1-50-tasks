#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	cin >> a;
	int c = 0;
	for (int i = 0; i < 3; i++) {
		if (a[i] > a[i + 1]) {
			c++;
		}
	}
	if (c == 3) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	return 0;
}