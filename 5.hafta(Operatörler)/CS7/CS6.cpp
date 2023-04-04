

#include <iostream> 

#include <stdlib.h> 

#include <string> 

using namespace std;



class Nokta {

public:

	double x, y;

	Nokta(double _x = 0, double _y = 0) :x(_x), y(_y) {}

	double xAl() { return x; }

	double yAl() { return y; }

	friend ostream& operator<<(ostream&, Nokta&);

	friend class Dogru;

};



class Dogru {

	Nokta n;

public:

	Dogru(double _n1 = 0, double _n2 = 0) : n(_n1, _n2) {}

	void yaz();

	Nokta operator-(Dogru&);

	friend ostream& operator<<(ostream&, Dogru&);

	Dogru operator++();

	Dogru operator++(int);

};



void Dogru::yaz() {

	cout << "y= " << n.xAl() << "x" << " + " << n.yAl() << endl;

}



Nokta Dogru::operator-(Dogru& d) {

	Nokta yeniNokta;

	yeniNokta.x = (n.yAl() - d.n.yAl()) / (n.xAl() - d.n.xAl());

	yeniNokta.y = (n.xAl() + n.yAl()) / 2;

	return yeniNokta;

}



ostream& operator<<(ostream& os, Dogru& o) {

	os << "y= " << o.n.x << "x" << " + " << o.n.y << endl;

	return os;

}



ostream& operator<<(ostream& os, Nokta& h) {

	os << "(";

	os << h.x;

	os << ",";

	os << h.y;

	os << ")" << endl;

	return os;

}



Dogru Dogru::operator++() {

	n.x += 1;

	return Dogru(n.x, n.y);

}



Dogru Dogru::operator++(int) {

	n.y += 1;

	return Dogru(n.x, n.y);

}



int main() {

	Dogru d1(2.0, 4.0);

	Dogru d2(-2.0, 2.0);

	Nokta n = d1 - d2;

	cout << n;

	++d1;

	d1.yaz();

	d1++;

	cout << d1;

	system("Pause");

}