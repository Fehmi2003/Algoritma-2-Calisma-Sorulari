#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class Kalem {
private:
	string isim;
	float fiyat;
	int adet;
public:
	static float toplam;
	Kalem(string _isim, float _fiyat, int _adet) :isim(_isim), fiyat(_fiyat), adet(_adet) {
		toplam += (adet * fiyat);
	}
	Kalem() {}
};

float Kalem::toplam = 0; // toplam değişkeninin sıfırlanması için statik tanımlandı.

int main() {
	string is;
	float fi;
	int ad;
	Kalem kalemler[10]; // kalemler dizisi oluşturuldu.
	for (int i = 0; i < 3; i++) {
		cout << "Kalemin ismini giriniz : ";
		cin >> is;
		cout << "Kalemin fiyatini giriniz:";
		cin >> fi;
		cout << "Kalemin adetini giriniz:";
		cin >> ad;
		kalemler[i] = { is,fi,ad }; // kalemler dizisi, kullanıcının girdiği bilgilerle dolduruldu.
		cout << endl;
	}
	cout << "Toplam tutar" << kalemler[0].toplam; // Toplam tutar, dizinin ilk elemanından çağrıldı.
	system("Pause");
}1
// Hata: Kalem sınıfının toplam değişkeni, statik olarak tanımlanmadı.
// Hata: kalemler dizisi tanımlanmadı ve Kalem sınıfı için nesneler oluşturulmadı.
// Hata: Toplam tutar, yanlış dizi elemanından çağrıldı.