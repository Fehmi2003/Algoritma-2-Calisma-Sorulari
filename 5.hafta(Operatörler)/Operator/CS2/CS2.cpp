
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
// Rasyonel sınıfı tanımı
class Rasyonel
{
    int pay;
    int payda;

public:
    Rasyonel(int _pay, int _payda) : pay(_pay), payda(_payda) {}
    int payAl() { return pay; }
    int paydaAl() { return payda; }
    bool operator>(Rasyonel&);
};

// Rasyonel sınıfı üye fonksiyonu tanımı
bool Rasyonel::operator>(Rasyonel& r)
{
    float a = (float)pay / (float)payda;
    float b = (float)r.pay / (float)r.payda;
    return a > b;
}

// Main fonksiyonu
int main()
{
    Rasyonel r1(1, 2), r2(2, 9);
    if (r1 > r2) {
        cout << r1.payAl() << "/" << r1.paydaAl() << " > ";
        cout << r2.payAl() << "/" << r2.paydaAl() << endl;
    }
    else {
        cout << r1.payAl() << "/" << r1.paydaAl() << " <= ";
        cout << r2.payAl() << "/" << r2.paydaAl() << endl;
    }
    system("Pause");
}
//PROGRAM ÇIKTISI
// 1 / 2 > 2 / 9