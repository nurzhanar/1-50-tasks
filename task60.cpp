#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	cin >> a;
	swap(a[0], a[2]);
	cout << a;
	return 0;
}