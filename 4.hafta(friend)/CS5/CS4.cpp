#include<iostream> 
#include<stdlib.h> 

using namespace std;

class Polinom {
    int* katsayi;
    int derece;
public:
    Polinom(int d) {
        derece = d;
    }
    ~Polinom() {
        delete[]katsayi;
    }
    friend void topla(Polinom&, Polinom&);
    void katsayiAta() {
        cout << "Katsayilari giriniz : " << endl;
        katsayi = new int[derece];
        for (int i = derece; i >= 0; i--) {
            cout << "Katsayi " << i << " : ";
            cin >> katsayi[i];
        }
    }
    void yaz() {
        cout << "(";
        for (int i = derece; i >= 0; i--) {
            if (katsayi[i] != 0) {
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

void topla(Polinom& x, Polinom& y) {
    for (int i = y.derece; i >= 0; i--)
        y.katsayi[i] += x.katsayi[i];
}

int main() {
    int d;
    cout << "Polinomun derecesini giriniz: ";
    cin >> d;
    Polinom p1(d), p2(d);
    p1.katsayiAta();
    p2.katsayiAta();
    p1.yaz();
    cout << " + ";
    p2.yaz();
    cout << " = ";
    topla(p2, p1);
    p1.yaz();
    cin.get();
    return 0;
}
