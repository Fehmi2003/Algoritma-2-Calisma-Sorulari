#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

// Seans sınıfı, her seans için koltuk sayısını ve işlevleri içerir.
class Seans
{
    int kontenjan; // kalan koltuk sayısı
public:
    // Yapıcı fonksiyon, varsayılan olarak 20 koltukla başlar.
    Seans(int kon = 20) {
        kontenjan = kon;
    }

    // yerVar fonksiyonu, rezervasyon yapmak için yeterli koltuk varsa true, yoksa false döndürür.
    bool yerVar() {
        if (kontenjan > 0)
            return true;
        else
            return false;
    }

    // yerAyir fonksiyonu, belirtilen sayıda koltuğu rezerve eder ve kalan koltuk sayısını günceller.
    void yerAyir(int rez) {
        if (kontenjan >= rez)
        {
            kontenjan -= rez;
            cout << rez << " koltuk rezerve edildi." << endl;
        }
        else
            cout << "Rezerve edilemedi." << endl;
    }

    // iptal fonksiyonu, iptal edilen koltukları geri verir ve kalan koltuk sayısını günceller.
    void iptal(int b) {
        kontenjan += b;
        cout << b << " koltuk iptal edildi." << endl;
    }

    // kalanKoltuk fonksiyonu, kalan koltuk sayısını döndürür.
    int kalanKoltuk() {
        return kontenjan;
    }
};

int main() {
	Seans onIki, onBes, onSekiz;
	char secenek;
	int saat, k;
	cout << "Lutfen asagidakilerden birini seciniz:" << endl << "R: Rezervasyon" << endl
		<< "I: Iptal" << endl << "K: Kalan koltuk sayisi" << endl << "S: Son" << endl << "Secenek: ";
	cin >> secenek;
	while (secenek != 'S')
	{
		if (secenek == 'R')
		{
			cout << "Seans Saati(12,15,18): ";
			cin >> saat;
			cout << "Koltuk sayisi: ";
			cin >> k;
			if (saat == 12)
			{
				if (onIki.yerVar() == 1)
					onIki.yerAyir(k);
			}
			else if (saat = 15)
			{
				if (onBes.yerVar() == 1)
					onBes.yerAyir(k);
			}
			else
			{
				if (onSekiz.yerVar() == 1)
					onSekiz.yerAyir(k);
			}
		}
		else if (secenek == 'I')
		{
			cout << "Seans Saati(12,15,18): ";
			cin >> saat;
			cout << "Koltuk sayisi: ";
			cin >> k;
			if (saat == 12)
				onIki.iptal(k);
			else if (saat = 15)
				onBes.iptal(k);
			else
				onSekiz.iptal(k);
		}
		else if (secenek == 'K')
		{
			cout << "Seans Saati(12,15,18): ";
			cin >> saat;
			if (saat == 12)
				cout << onIki.kalanKoltuk() << " koltuk rezerve edilebilir.";
			else if (saat = 15)
				cout << onBes.kalanKoltuk() << " koltuk rezerve edilebilir.";
			else
				cout << onSekiz.kalanKoltuk() << " koltuk rezerve edilebilir.";
		}
		else
			break;
		cout << "Secenek: ";
		cin >> secenek;
	}
	system("pause");
}

