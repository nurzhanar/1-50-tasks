#include <iostream>                
using namespace std;
int main() {
	for (double i = 1.2; i <3; i+=0.2) {
		cout << i << ","<<" ";
		if (i == 2.8) {
			cout << i << ".";
		}
	}
}