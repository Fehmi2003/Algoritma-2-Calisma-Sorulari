
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

// Tanimlanan sinif: Konum
class Konum {
    float enlem; // Enlem degeri
    float boylam; // Boylam degeri

public:
    // Kurucu fonksiyon (Constructor)
    Konum(float _enlem = 0, float _boylam = 0) :enlem(_enlem), boylam(_boylam) {}

    // Cikti akimi (ostream) icin operator overloading
    friend ostream& operator<<(ostream&, Konum&);

    // Operator fonksiyonu () ile yeniden yukleme
    Konum operator()(float, float);
};

// Operator fonksiyonu () ile yeniden yukleme
Konum Konum::operator()(float e, float b)
{
    Konum yeniKonum;
    yeniKonum.enlem = e + enlem;
    yeniKonum.boylam = b + boylam;
    return yeniKonum;
}

// Cikti akimi (ostream) icin operator overloading
ostream& operator<<(ostream& os, Konum& k)
{
    os << "(" << k.enlem << "," << k.boylam << ")" << endl;
    return os;
}

// Ana fonksiyon
int main()
{
    Konum k1(32.34, -35.65), k2;
    k2 = k1(2.3, 4.5);
    cout << k1;
    cout << k2;
    system("Pause");
}
