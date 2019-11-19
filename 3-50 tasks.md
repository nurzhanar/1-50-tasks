/*1
#include <iostream>
using namespace std;
int main()
{
    cout <<"Silence is golden";
	return 0;
}
*/
/*2
#include <iostream>
using namespace std;
int main()
{
	cout << "Monday" << " " << "November" << " " << "Nurzhanar" << " ";
	return 0;
}
*/
/*3
#include <iostream>
using namespace std;
int main()
{
	cout << "0" << endl;
	cout << "0" <<" "<<"0"<< endl;
	cout << "0" << " " << "0" << " " << "0" << endl;
	cout << "0" << " " << "0" << " " << "0" <<" " << "0" << endl;
	cout << "0" << " " << "0" << " " << "0" << " " << "0"<<" "<<"0" << endl;
	return 0;
}
*/
/*4
#include <iostream>
using namespace std;
int main()
{
	cout << "_" << "_" << "_" << "_" << "_" << "_" << "_" << "_" << endl;
	cout << "|" << "A" << "A" << "A" << "A" << "A" << "A" << " |" << endl;
	cout << "|" << "A" << "A" << "A" << "A" << "A" << "A" << " |" << endl;
	cout << "|" << "A" << "A" << "A" << "A" << "A" << "A" << " |" << endl;
	cout << "_" << "_" << "_" << "_" << "_" << "_" << "_" << "_" << endl;
	return 0;
}
*/

/*5
#include <iostream>
using namespace std;
int main()
{
	cout << "*" << " " << " "  << " " << " "  << " " << "*" << " " << " " << " " << " " << " " << "*"<< endl;
	cout << " " << "*" << " " << " " << " " << "*" << " " << "*" << " " << " " << " " << "*"  << endl;
	cout << " " << " " << "*" << " " << "*" << " " << " " << " " << "*" << " " << "*" <<  endl;
	cout << " " << " " << " " << "*" << " " << " " << " " << " " << " " << "*" << endl;
	return 0;
}
*/
/*7
#include <iostream>
using namespace std;
int main()
{
	cout <<(1/2.0)+(1/4.0)<< endl;
	return 0;
}
*/
/*8
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a = 2;
	int b = 3;
	cout << (a+(4*b))*(a-(3*b))+pow(a,2)<< endl;
	return 0;
}
*/
/*9
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x=-2;
	cout << abs(x)+pow(x,5)<< endl;
	return 0;
}
*/
/*10
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x = 1.7;
	cout <<pow((x+1),2) +3*(x+1) << endl;
	return 0;
}
and
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x = 3;
	cout << pow((x + 1), 2) + 3 * (x + 1) << endl;
	return 0;
}
*/
/*11
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x = -2.34;
	cout << ((abs(x-5)-sin(x))/3)+sqrt(pow(x,2)+2014)*cos(2*x)-3 << endl;
	return 0;
}
*/
/*12
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x = 3.6;
	cout << pow(exp(1.0),(x-2))+abs(sin(x))-pow(x,4)*cos(1/x)<< endl;
	return 0;
}
*/
/*13?
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x = 1;
	double a = 0.1;
	double b = 0.2;
	cout << pow((pow(x,2)+b),(1/5))-((pow(b,2)*pow((sin(x+a)),3))/x) << endl;
	return 0;
}
*/
/*14
#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	cout << a + b <<endl<< a * b;
	return 0;
}
*/
/*15
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a;
	cin >> a;
	cout <<pow(a,2)<<endl<< pow(a,3);
	return 0;
}
*/
/*16
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a,b,c;
	cin >> a>>b>>c;

	cout << a*2 << endl << b/3.0<<endl<<pow(c,2)<<endl<<( a * 2)+( b / 3.0)+ (pow(c, 2));
	return 0;
}
*/
/*17
#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << (a + b + c) / 3.0 << endl << (a * 2) - c - (b * 3);
	return 0;
}
*/
/*18
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a;
	cin >> a;
	int p = 4 * a;
	int s = pow(a, 2);
	cout << p<< endl << s;
	return 0;
}
*/
/*19
#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cin >> a>>b;
	cout << (a*0.3)+(b*0.4)<<endl;
	return 0;
}
#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	cout << 3*((a * 2) + (b * 1.8))<< endl;
	return 0;
}
*/
/*20
#include <iostream>
using namespace std;
int main()
{
	double t,s;
	cin >> t>>s;
	double v = (s * 1000) / (t * 60);
	cout << v << endl;
	return 0;
}
*/
/*21
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	double c = sqrt(pow(a, 2) + pow(b, 2));
	double s = (a * b) / 2.0;
	double p = a + b + c;
	cout << s<<" "<<p<<" "<<c<< endl;
	return 0;
}
*/
/*22
#include <iostream>
using namespace std;
int main()
{
	double t;
	cin >> t;
	cout <<(t * 9 / 5) + 32 << endl;
	return 0;
}
*/
/*23
#include <iostream>
using namespace std;
int main()
{
	double x,a,y,k;
	cin >> x>>a>>y>>k;
	double b = (a * y) / x;
	double d = (x * k) / a;
	cout <<b<<" "<<d << endl;
	return 0;
}
*/
/*24
#include <iostream>
using namespace std;
int main()
{
	double n,p,s;
	cin >> n>>p>>s;
	double a = (((2*s + 3 * (n - 1)) * n) / 2)+s*(p/100);
	cout << a << endl;
	return 0;
}
*/
/*25
#include <iostream>
using namespace std;
int main()
{
	double w, m, y;
	cin >> w>> m >> y;
	double a =(7*w)+(m*30)+(30*12*y) ;
	cout << a << endl;
	return 0;
}
*/
/*26
#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cin >> a >> b;
	int t = a;
	a = b;
	b = t;
	cout << a<<" "<<b << endl;
	return 0;
}
*/
/*27
#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int t = a, m = b,n=c;
	a = t + m;
	b = n - t;
	c = t + m + n;
	cout << a << " " << b <<" "<<c<< endl;
	return 0;
}
*/
/*28?
#include <iostream>
using namespace std;
int main()
{
	double s;
	int p;
	cin >> s >> p;
	for (int i = 0; i < 5; i++) {
		s = s + s * (p/100.0);
	}
	cout << s<< endl;
	return 0;
}
or
#include <iostream>
using namespace std;
int main()
{
	double s;
	int p;
	cin >> s >> p;
	double y1 = s+s * (p / 100.0);
	double y2 =y1+ y1 * (p / 100.0);
	double y3 = y2+y2 * (p / 100.0);
	double y4 = y3+y3 * (p / 100.0);
	double y5 = y4+y4 * (p / 100.0);
	
	cout << y5<< endl;
	return 0;
}
*/

/*29
#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	swap(a, b);
	cout<<a<<" "<<b;
	return 0;
}
*/
/*30
#include <iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	int b = a * a;
	int c = a * a * a;
	cout << b*b<<" "<<b*b*b<<" "<<c*c*c*c*c;
	return 0;
}
*/
/*31
#include <iostream>
using namespace std;
int main()
{
	int a = 647, b = 170,c=30;
	int s = a * b;
	int s2 = c * c;
	cout << s / s2 << endl;
}
*/
/*32
#include <iostream>
using namespace std;
int main()
{
	int n= 237;
	int c = 237 / 100;
	int d = 237 % 100;
	int x = (d * 10) + c;
	cout << x;
	return 0;
}
*/
/*33
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x,y,result;
	cin >> x >> y;
	if (y > 0) {
		if ((x - sqrt(y)) > 0) {
			result = sqrt(x - sqrt(y));
		}
	}
	cout <<result ;
	return 0;
}
*/
/*34
#include <iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	if (x > 3) {
		x = x + 10;
	}else {
		x = x - 10;
	}
	cout <<x;
	return 0;
}
*/
/*35
#include <iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	if (x <7) {
		cout<<"Yes";
	}if(x>10) {
		cout << "No";
	}if (x == 9) {
		cout << "Error";
	}
	return 0;
}
*/
/*36
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n == 1) {
		cout << "January";
	}
	if (n == 2) {
		cout << "February";
	}
	if (n == 3) {
		cout << "March";
	}
	if (n == 4) {
		cout << "April";
	}
	if (n == 5) {
		cout << "May";
	}
	if (n == 6) {
		cout << "June";
	}
	if (n == 7) {
		cout << "July";
	}
	if (n == 8) {
		cout << "August";
	}
	if (n == 9) {
		cout << "September";
	}
	if (n == 10) {
		cout << "October";
	}
	if (n == 11) {
		cout << "November";
	}
	if (n == 12) {
		cout << "December";
	}
	return 0;
}
*/
/*37
#include <iostream>
using namespace std;
int main()
{
	int x,y;
	cin >> x>>y;
	if (x < y) {
		cout << y;
	}else{
		cout << x;
	}
	return 0;
}
*/
/*38
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x, y;
	cin >> x >> y;
	if (abs(x-y)==100) {
		cout << "Yes";
	}else {
		cout << "No";
	}
	return 0;
}
*/
/*39
#include <iostream>
using namespace std;
int main()
{
	int x, y;
	cin >> x >> y;
	if (x < y) {
		cout <<"Yes";
	}else {
		swap(x,y);
		cout << x<<" " << y;
	}
	return 0;
} 
*/
/*40
#include <iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	if (x> -10 && x<10) {
		cout << x+5;
	}else {
		cout << x - 10;
	}
	return 0;
}
*/
/*40
#include <iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	if (x <-100 || x > 100) {
		x=0;
	}else {
		x = x + 1;
	}
	cout << x;
	return 0;
}
*/
/*42
#include <iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	if (x >=2 && x <=5) {
		x=x + 10;
	}else if(x >7 && x <40) {
		x = x - 100;
	}else if(x < 0 || x >3000) {
		x = x * 3;
	}else {
		x=0;
	}
	cout << x;
	return 0;
}
*/
/*43
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n == 1 && n == 2 && n == 12) {
		cout << "Winter";
	}
	if (n >= 3 && n<=5) {
		cout << "Spring";
	}
	if (n >= 6 && n<=8) {
		cout << "Summer";
	}
	if (n >= 9 && n<=11) {
		cout << "Autumn";
	}
	return 0;
}
*/
/*44
#include <iostream>
using namespace std;
int main()
{
	int x, y;
	cin >> x >> y;
	if (x!=10 && y!=10 && x % 2 == 0) {
		cout << x+y;
	}
	else {
		cout << x*y;
	}
	return 0;
}
*/
/*45
#include <iostream>
using namespace std;
int main()
{
	int x, y,z;
	cin >> x >> y>>z;
	if (x> 10 && y>10 && z>10 && x % 3 ==0 && y%3==0) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	return 0;
}
*/
/*46
#include <iostream>
using namespace std;
int main()
{
	int x, y, z;
	int s;
	cin >> x >> y >> z;
	if ( x % 5 == 0 && y%5==0 ) {
		s = x + y;
	} else if (z % 5 == 0 && y % 5 == 0) {
		s = z+ y;
	}else if (z % 5 == 0 && x % 5 == 0) {
		s = z + x;
	}else if (z % 5 == 0 && x % 5 == 0 && y % 5 == 0) {
		s = z + x+y;
	}
	else {
		cout << "Error";
	}
	cout << s;
	return 0;
}
*/
/*47
#include <iostream>
using namespace std;
int main()
{
	int x, y, z;
	int max=0;
	cin >> x >> y >> z;

	if (x > y && x>z) {
		max=x;
	}else if (y > x && y > z) {
		max = y;
	}
	else if (z > x && z > y) {
		max = z;
	}
	cout << max;
	return 0;
}
*/
/*48
#include <iostream>
using namespace std;
int main()
{
	int x, y, z;
	int m = 0;
	cin >> x >> y >> z;
	if (x > y &&  z> y) {
		m= x+z;
	}
	else if (y > x && z> x) {
		m = y+z;
	}
	else if (x > z && y > z) {
		m= x+y;
	}
	cout << m;
	return 0;
}
*/
/*49
#include <iostream>
using namespace std;
int main()
{
	int a[4];
	int m = 0;
	bool s = false;
	for (int i = 0; i < 4; i++) {
		cin >> a[i];
		if (a[i] % 2 == 0) {
			if (a[i] > m) {
				m = a[i];
				s = true;
			}
		}
	}if (s == true) {
		cout << m;
	}
	else {
		cout << "not found";
	}
	
	return 0;
}
*/
/*50
#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if (a == b || a == c || c == b) {
		cout << "yes";
	}
	else {
		cout << "no";
	}
}
*/
