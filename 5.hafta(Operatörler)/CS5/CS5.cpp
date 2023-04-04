#include <iostream> 

#include <stdlib.h> 

#include <string> 

using namespace std;



class Renk {

	int r, g, b;

public:

	Renk(int _r = 0, int _g = 0, int _b = 0) :r(_r), g(_g), b(_b) {}

	friend Renk operator +(const Renk&, const Renk&);

	friend Renk operator +(const int, const Renk&);

	int operator[](int);

	void goruntule() {

		cout << "(" << r << "," << g << "," << b << ")" << endl;

	}

};



Renk operator +(const Renk& n, const Renk& k) {

	Renk a1;

	a1.r = n.r + k.r;

	a1.g = n.g + k.g;

	a1.b = n.b + k.b;

	return a1;

}



Renk operator +(const int k, const Renk& re) {

	Renk as;

	as.r = re.r + k;

	as.g = re.g + k;

	as.b = re.b + k;

	return as;

}



int Renk::operator [](int i) {

	if (i == 0)

		return r;

	else if (i == 1)

		return g;

	else if (i == 2)

		return b;

}



int main()

{

	Renk r1(255, 67, 123), r2(0, 34, 56), r3;

	r1.goruntule();

	r2.goruntule();

	r3 = r1 + r2;

	r3.goruntule();

	r2 = 20 + r2;

	r2.goruntule();

	r3.goruntule();

	cout << r1[0] << endl;

	cout << r1[1] << endl;

	cout << r1[2] << endl;

	system("Pause");

}