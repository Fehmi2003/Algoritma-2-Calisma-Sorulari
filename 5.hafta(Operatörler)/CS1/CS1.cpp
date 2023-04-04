//A sınıfı için verilen komular için gerekli olan operatör yükleme fonksiyonlarını yaz.
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class A {
	int x;
public:
	A(int _x = 0) :x(_x) {}
	friend ostream& operator<<(ostream&, A&);
	friend istream& operator >> (istream&, A&);
	friend bool operator>(const A&, int);
	A operator +(const A&);
	A operator +=(const A&);
};

ostream& operator<<(ostream& os, A& n) {
	os << n.x;
	return os;
}

istream& operator >> (istream& is, A& n1) {
	is >> n1.x;
	return is;
}

bool operator>(const A& n1, int k) {
	return n1.x > k;
}

A A::operator +(const A& n) {
	A a1;
	a1.x = x + n.x;
	return a1;
}

A A::operator +=(const A& n) {54
	x += n.x;
	return x;
}

int main() {
	A a1(5), a2(3), a3;
	cout << a1 << endl;  //5 
 	a3 = a1 + a2;        //a3.x=8
	cout << a3 << endl;
	a1 += a2;           //a1.x=8
	cout << a1 << endl;    
	if (a1 > 4)    //true /kullanıcıdan a2.x değerine okur
		cin >> a2;
	system("Pause");
}


