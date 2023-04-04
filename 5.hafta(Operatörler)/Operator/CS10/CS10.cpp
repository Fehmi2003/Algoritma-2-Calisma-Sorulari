#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int e = 0;

class Kume
{
public:
	int x, * a;
	Kume(int _x = 0) :x(_x) {
		a = new int[x];
		for (int i = 0; i < x; i++) {
			a[i] = 0;
		}
	}
	~Kume() {
		delete[] a;
	}
	friend istream& operator >> (istream& is, Kume& d);
	friend Kume operator *(const Kume& s, const Kume& d);
	friend ostream& operator<<(ostream& os, const Kume& o);
};

istream& operator >> (istream& is, Kume& d) {
	cout << "Kume boyutunu giriniz (-1 girerek bitirin): ";
	is >> d.x;
	if (d.x != -1) {
		cout << "Kumeyi giriniz: ";
		for (int i = 0; i < d.x; i++) {
			is >> d.a[i];
		}
	}
	return is;
}

Kume operator *(const Kume& s, const Kume& d) {
	Kume w;
	for (int i = 0; i < s.x; i++) {
		for (int j = 0; j < d.x; j++) {
			if (s.a[i] == d.a[j]) {
				w.a[e] = s.a[i];
				e++;
			}
		}
	}
	return w;
}

ostream& operator<<(ostream& os, const Kume& o) {
	for (int i = 0; i < e; i++) {
		os << o.a[i] << " ";
	}
	return os;
}

int main() {
	Kume n, m, sonuc;
	cout << "1. Kumeyi giriniz: "<<endl;
	cin >> n;
	cout << "2. Kumeyi giriniz: "<<endl;
	cin >> m;
	sonuc = n * m;
	cout << "Kesişim: " << sonuc << endl;
	system("Pause");
}

//Düzeltmeler şunlardır:
/*friend istream& operator >> (istream& is, Kume d[]); yerine friend istream& operator >> (istream& is, Kume& d); kullanılarak Kume nesnesine referans verilmiştir.
friend Kume operator *(Kume s[], Kume d[]); yerine friend Kume operator *(Kume& s, Kume& d); kullanılarak Kume nesnelerine referanslar verilmiştir.
friend ostream& operator<<(ostream&, Kume o[]); yerine friend ostream& operator<<(ostream&, Kume& o); kullanılarak Kume nesnesine referans verilmiştir.
cin >> n[]; yerine cin >> n; kullanılarak Kume nesnesi doğru şekilde okunmuştur.
cout << n[] * m[]; yerine cout << n * m; kullanılarak Kume nesneleri doğru şekilde çarpılarak sonuç yazdırılmıştır.
for (int i = 0; s.a[i] != 0; i++) ve for (int j = 0; d.a[j] != 0; j++) kullanılarak Kume nesnesinin elemanları doğru şekilde kontrol edilmiştir.s.a ve d.a kullanılarak Kume nesnesinin
*/