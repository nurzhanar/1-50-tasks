#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a;
	cin >> a;
	int n1 = (a-(a % 1000))/1000;
	int n2=((a - (a % 100)) - (a - (a % 1000))) / 100;
	int n3 = ((a - (a % 10)) - (a - (a % 100))) / 10;
	int n4 = a % 10;
	if (n1 == n2 || n1 == n3 || n1 == n4 || n2 == n3 || n2 == n4 || n3 == n4) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	return 0;
}