#include <iostream>
#include <string>  
using namespace std;

class VucutKutlesi {
private:
    float boy;
    float kilo;
    string durum;

public:
    VucutKutlesi(float _boy, float _kilo) : boy(_boy), kilo(_kilo) {}

    float vkihesapla();
    float idealKiloHesapla();

    // friend fonksiyonlar, private üyelere erişim sağlamak için kullanılır.
    friend void testVkiHesapla(VucutKutlesi);
    friend void testIdealKiloHesapla(VucutKutlesi);
};

float VucutKutlesi::vkihesapla() {
    cout << "VKI hesabi test ediliyor...." << endl << "Kilo: " << kilo << " kg" << endl << "Boy: " << boy << " m" << endl;
    return kilo / (boy * boy);
}

float VucutKutlesi::idealKiloHesapla() {
    return boy * boy * 22;
}

void testVkiHesapla(VucutKutlesi a) {
    float testVki, Vki;
    Vki = a.vkihesapla();
    testVki = a.kilo / (a.boy * a.boy);
    if (Vki == testVki)
        cout << "Test basarili..." << endl << Vki;
    else
        cout << "Test Basarisiz..." << endl << "Hesaplanan: " << testVki << endl << "Olmasi gereken: " << Vki;
}

void testIdealKiloHesapla(VucutKutlesi a) {
    cout << "\n\nIdeal kilo hesabi test ediliyor..." << endl << "Kilo: " << a.kilo << " kg" << endl << "Boy: " << a.boy << " m" << endl;
    float tIdeal, Ideal;
    Ideal = a.idealKiloHesapla();
    tIdeal = a.boy * a.boy * 22;
    if (tIdeal == Ideal)
        cout << "Test basarili..." << endl << Ideal;
    else
        cout << "Test Basarisiz..." << endl << "Hesaplanan: " << tIdeal << endl << "Olmasi gereken: " << Ideal;
}

int main() {
    float k, b;

    cout << "Kilo : ";
    cin >> k;

    cout << "Boy : ";
    cin >> b;

    VucutKutlesi a(b, k);

    testVkiHesapla(a);

    testIdealKiloHesapla(a);

    return 0;
}
