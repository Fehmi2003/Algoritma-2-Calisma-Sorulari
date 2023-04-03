#include <iostream> 
#include <string> 

using namespace std;

class Zaman {
    int s, d; // saat ve dakika değerlerini tutan değişkenler
public:
    // iki parametreli kurucu fonksiyon
    Zaman(int _s, int _d) :s(_s), d(_d) { }

    // saat ve dakika değerlerini kullanıcıdan alan fonksiyon
    void oku(int _s, int _d) {
        s = _s;
        d = _d;
    }

    // saat ve dakika değerlerini ekrana yazdıran fonksiyon
    void yaz() {
        if (s == 0) {
            if (d > 10)
                cout << "00" << ":" << d;
            else
                cout << "00" << ":0" << d; // dakika değeri 10'dan küçük ise 0 ile birlikte yazdır
        }
        else {
            if (d > 10)
                cout << s << ":" << d;
            else
                cout << s << ":0" << d; // dakika değeri 10'dan küçük ise 0 ile birlikte yazdır
        }
    }

    // dakika değerini arttıran fonksiyon
    void arttir(int dak) {
        d += dak;
        if (d > 60) {
            int po = (d / 60);
            s += po;
            d -= (po * 60);
        }
        if (d == 60) {
            d = 0;
            s += 1;
        }
        if (s == 24)
            s = 0;
    }
};

class Ucus {
    int ucno;
    Zaman kalkis, varis; // Zaman sınıfından iki tane nesne
public:
    // iki parametreli kurucu fonksiyon
    Ucus(int a, int b, int c, int d, int e) :ucno(a), kalkis(b, c), varis(d, e) { }

    // uçuş numarası ve uçuş saatlerini ekrana yazdıran fonksiyon
    void goster() {
        cout << "Ucus no: " << ucno << " Kalkis: ";
        kalkis.yaz();
        cout << " Varis: ";
        varis.yaz();
        cout << endl;
    }

    // her iki Zaman nesnesinin dakika değerlerini arttıran fonksiyon
    void rotar(int ro) {
        kalkis.arttir(ro);
        varis.arttir(ro);
    }
};



int main() {

	int say, nu, ks, kd, vs, vd, rota;

	cout << "Ucus sayisini giriniz:"; cin >> say;

	Ucus* deneme = new Ucus[say];

	for (int i = 0; i < say; i++)

	{

		cout << "Ucus numarasi,kalkis ve varis saatlerini giriniz: ";

		cin >> nu >> ks >> kd >> vs >> vd;

		deneme[i] = { nu,ks,kd,vs,vd };

	}

	cout << "Rotar Bilgisini dakika olarak girin: "; cin >> rota;

	cout << "Tum ucuslarda " << rota << " dakika gecikme olacak" << endl;

	cout << "Guncellenmis Ucus Tarifesi:" << endl;

	for (int i = 0; i < say; i++)

	{

		deneme[i].rotar(rota);

		deneme[i].goster();

	}

	delete[] deneme;

	system("Pause");

}

