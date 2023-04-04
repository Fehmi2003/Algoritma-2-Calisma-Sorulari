 

#include <iostream> 

#include <stdlib.h> 

#include <string> 

using namespace std;



class Tarih {

	int yil, ay, gun;

public:

	Tarih(int _yil, int _ay, int _gun) :yil(_yil), ay(_ay), gun(_gun) {}

	int gunAl() { return gun; }

	int ayAl() { return ay; }

	int yilAl() { return yil; }

	friend bool operator>(const Tarih& a, const Tarih& b) {

		if (a.yil < b.yil)

			return false;

		else if (a.ay < b.ay)

			return false;



		else if (a.gun <= b.gun)

			return false;

		else

			return true;

	}

	friend class Urun;

};



class Urun {

	int urunKodu;

	Tarih uretimTarihi, sonKullanmaTarihi;

public:

	Tarih uretimTarihiAl() {}

	int urunKoduAl() { return urunKodu; };

	Urun(int _urunKodu, Tarih _uretim, Tarih _sonKullanma) :urunKodu(_urunKodu), uretimTarihi(_uretim), sonKullanmaTarihi(_sonKullanma) {}

	Tarih sonKullanmaTarihiAl() {

		return sonKullanmaTarihi;

	}

};



int main()

{

	Tarih uretim(2012, 07, 12);

	Tarih sonKullanma(2012, 07, 15);

	Urun sut(102, uretim, sonKullanma);

	int yil, ay, gun;

	cout << "Bugunun tarihini giriniz (yil ay gun): ";

	cin >> yil >> ay >> gun;

	Tarih bugun(yil, ay, gun);

	if (bugun > (sut.sonKullanmaTarihiAl()))

		cout << "Gunu gecmis urun lutfen kullanmayiniz ..." << endl;

	else

		cout << "Urunu guvenle kullanabilirsiniz ..." << endl;

	system("Pause");

}