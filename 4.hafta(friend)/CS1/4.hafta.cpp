#include<iostream>
using namespace std;
class A {
	int x;
	const int y;
public	:
	A(int _y):y(_y){}
	int yAl() const;
	int xAl()const;
	void xAta(int x);
};
//a. öncül GEÇERSİZDİR...x const değer olduğundan değiştirilemez.
int A::xAl() const {
	return x++;
}
//b. öncül GEÇERLİDİR.
void A::xAta(int _x) {
	const int x = _x;
}
//c. öncül GEÇERLİDİR
int A::yAl()const {
	return y;
}
//d. öncül GEÇERSİZDİR... class içinde böyle bir fonksiyon tanımlı değildir
void A::yAta(int _y)const {
	y = _y;
}