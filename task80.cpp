#include <iostream>                
using namespace std;
int main() {
	for (int i = 1001; i <= 1025; i+=3) {
		cout << i << ",";
		if (i == 1025) {
			cout << i << ".";
		}
	}
}