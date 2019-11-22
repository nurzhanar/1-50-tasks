#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int x1,x2,y1,y2,l1,l2,l3,l4,x3,y3;
	cin>>x1>>y1>>l1>>l2>>x2>>y2>>l3>>l4;
	int s1,s2;
	s1=l1*l2;
	s2=l3*l4;
	if(s1>=s2){
		x3 = x2 + l3;
		y3 = y2 + l4;
		cout<< x2 <<" "<<y2<<" "<<x3<<" "<<y3;
	}
	if(s1<s2){
		x3 = x1 + l1;
		y3 = y1 + l2;
		cout<< x1 <<" "<<y1<<" "<<x3<<" "<<y3;
	}
}