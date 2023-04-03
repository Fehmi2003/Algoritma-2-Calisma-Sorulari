#include <iostream> 

using namespace std;

// Nokta sınıfı tanımlanıyor
class Nokta {
    int x, y;

public:
    // Yapıcı fonksiyon ile nesne oluşturma sırasında koordinatları atıyoruz
    Nokta(int _x, int _y) : x(_x), y(_y) {}

    // x ve y koordinatlarını değiştirmek için ayrı ayrı setter fonksiyonlarımız var
    void xAta(int _x) { x = _x; }
    void yAta(int _y) { y = _y; }

    // x ve y koordinatlarını almak için ayrı ayrı getter fonksiyonlarımız var
    float xAl() { return x; }
    float yAl() { return y; }

    // Dikdörtgen sınıfına özel erişim izni veriyoruz
    friend class Dikdortgen;
};

// Dikdörtgen sınıfı tanımlanıyor
class Dikdortgen {
    Nokta a, b;

public:
    // Yapıcı fonksiyon ile nesne oluşturma sırasında köşeleri atıyoruz
    Dikdortgen(Nokta _a, Nokta _b) : a(_a), b(_b) {}

    // Dikdörtgenin alanını hesaplamak için bu fonksiyonu kullanıyoruz
    int alan() {
        return abs(a.x - b.x) * abs(a.y - b.y);
    }

    // Dikdörtgenin çevresini hesaplamak için bu fonksiyonu kullanıyoruz
    int cevre() {
        return 2 * (abs(a.x - b.x) + abs(a.y - b.y));
    }
};

int main() {
    int x, y;

    cout << "a noktasi (x,y) :";
    cin >> x >> y;
    Nokta a(x, y);

    cout << "b noktasi (x,y) :";
    cin >> x >> y;
    Nokta b(x, y);

    Dikdortgen d(a, b);

    cout << "Cevre: " << d.cevre() << endl;
    cout << "Alan: " << d.alan() << endl;

    return 0;
}
