#include <iostream>
using namespace std;

// Kola Makinesi sınıfını tanımlama
class KolaMakinesi {
private:
    double fiyat;
    int adet;
public:
    // İlk yükleme işlevi
    void ilkYukleme(double, double);

    // Kola verme işlevi
    void kolaVerme();

    // Makinenin durumunu görüntüleme işlevi
    void goster();
};

// İlk yükleme işlevini tanımlama
void KolaMakinesi::ilkYukleme(double fiyat = 2.5, double adet = 100) {
    this->fiyat = fiyat;
    this->adet = adet;
}

// Kola verme işlevini tanımlama
void KolaMakinesi::kolaVerme() {
    double fark, girilenPara;
    cout << "Kolanin Fiyati: " << fiyat << " lira" << endl;
    cout << "Odemeniz:";
    cin >> girilenPara;

    // Girilen para kola fiyatından büyük veya eşitse ve kola stokta varsa
    if (girilenPara >= fiyat && adet > 0) {
        cout << "Kolaniz veriliyor." << endl;
        adet--; // Kola stoktan çıkarılır
        fark = girilenPara - fiyat;

        // Para üstü hesaplama ve ekrana yazdırma
        if (fark > 0.0) {
            cout << "Para ustunuz: ";
            if (fark > 1.0)
                cout << fark << " lira" << endl;
            else
                cout << fark * 100 << " kurus" << endl;
        }
        else
            cout << "Para ustunuz bulunmamaktadir." << endl;
    }
    else
        cout << "eksik para girisi yapilmistir ya da kola adeti bitmistir" << endl;
}

// Makinenin durumunu görüntüleme işlevini tanımlama
void KolaMakinesi::goster() {
    cout << "Son durum:" << endl;
    cout << "    Kolanin fiyati: " << fiyat << " lira." << endl;
    cout << "    Kalan Kola sayisi: " << adet << endl;
}

// Ana işlev
int main() {
    KolaMakinesi makine1;
    makine1.ilkYukleme(); // Kola makinesine

    /*
    Kolanın fiyati: 2.5 lira.
    odemeniz: 3
    kolanız veriliyor.
    Para ustunuz:50 kurus.
    Son durum
    kolanın fiyatı: 2.5 lira.
    kalan kola sayisi: 99
    */