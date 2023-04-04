

#include <iostream> 

#include <stdlib.h> 

#include <string> 

using namespace std;



class Polinom {

	int* katsayi;

	int derece;

public:

	void operator +(const Polinom&);

	Polinom(int d = 0) {

		derece = d;

	}

	void katsayiAta() {

		cout << "Katsayilari giriniz : " << endl;

		katsayi = new int[derece];

		for (int i = derece; i >= 0; i--) {

			cout << "Katsayi " << i << " : ";

			cin >> katsayi[i];

		}

	}

	void yaz() {

		cout << "(";

		for (int i = derece; i >= 0; i--) {

			if (katsayi[i] != 0) {

				if (i == 0)

					cout << katsayi[i];

				else if (i == 1)

					cout << katsayi[i] << "x+";

				else

					cout << katsayi[i] << "x" << i << "+";

			}

		}

		cout << ")";

	}

};



void Polinom::operator+(const Polinom& n1) {

	for (int i = n1.derece; i >= 0; i--) {

		n1.katsayi[i] += katsayi[i];

	}

}



int main() {

	int d;

	cout << "Polinomun derecesini giriniz :";

	cin >> d;

	Polinom p1(d), p2(d), p3;

	p1.katsayiAta();

	p2.katsayiAta();

	p1.yaz();

	cout << " + ";

	p2.yaz();

	cout << "=";

	p2 + p1;

	p1.yaz();

	system("Pause");

}



