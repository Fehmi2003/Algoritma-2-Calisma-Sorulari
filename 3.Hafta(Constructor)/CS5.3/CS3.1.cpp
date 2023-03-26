#include<iostream>
using namespace std;
int g = 5;
class Test {
	int x, y;
public:
	Test(int _x, int _y) :x(_x), y(_y) { g += 3; }
	Test(int _x);
	~Test();
	int f(int&, int = 8);

};
Test::Test(int _x) {
	x = _x;
	y = _x;
}
Test::~Test() {
	cout << x << "" << y << "" << g << endl;
}
int Test::f(int& s, int t) {
	s *= 2;
	t *= 3;
	x += 2;
	y + 3 = ;
	cout << s << "" << endl;
	return s + t;
}
int main() {
	int d = 1; e = 2;
	Test obj1(3), obj2(2, 4);
	g = obj1.f(d, e);
	g = obj2.f(e);
	cout << d << e << endl;
	return 0;
}