#include <iostream>
#include <stdlib.h>

using namespace std;

// Polinom sınıfı tanımlanıyor
class Polinom
{
	// private veriler
	int* katsayi;
	int derece;

public:
	// constructor
	Polinom(int d)
	{
		derece = d;
	}

	// destructor
	~Polinom()
	{
		delete[] katsayi;
	}

	// katsayıları kullanıcıdan alma fonksiyonu
	void katsayiAta()
	{
		cout << "Katsayilari giriniz : " << endl;
		katsayi = new int[derece];

		// dereceden başlayarak kullanıcıdan katsayıları alıyoruz
		for (int i = derece; i >= 0; i--)
		{
			cout << "Katsayi " << i << " : ";
			cin >> katsayi[i];
		}
	};

	// iki polinomu toplama fonksiyonu
	void topla(Polinom x)
	{
		// dereceden başlayarak katsayıları topluyoruz
		for (int i = derece; i >= 0; i--)
		{
			katsayi[i] += x.katsayi[i];
		}
	};

	// polinomu yazdırma fonksiyonu
	void yaz()
	{
		cout << "(";

		for (int i = derece; i >= 0; i--)
		{
			// eğer katsayı sıfırdan farklıysa işlem yapıyoruz
			if (katsayi[i] != 0)
			{
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

// main fonksiyonu
int main()
{
	int d;
	cout << "Polinomun derecesini giriniz :";
	cin >> d;

	// polinom nesneleri oluşturuluyor
	Polinom p1(d), p2(d);

	// kullanıcıdan katsayıları alıyoruz
	p1.katsayiAta();
	p2.katsayiAta();

	// işlem sonucunu yazdırıyoruz
	p1.yaz();
	cout << " + ";
	p2.yaz();
	cout << "=";
	p1.topla(p2);
	p1.yaz();

	// program sonlandırılıyor
	system("Pause");
	return 0;
}
