#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

// Telsiz sınıfını tanımlayalım
class Telsiz {
public:
    int ses;          // ses seviyesi değişkeni
    float frekans;    // kanal frekansı değişkeni
    string cumle;     // cihazın konuştuğu cümle değişkeni
    string mesaj;     // cihazın dinlediği mesaj değişkeni
    void ac();        // telsiz açma fonksiyonu
    void sesAyarla(int);        // ses seviyesi ayarlama fonksiyonu
    void kanalAyarla(float);    // kanal frekansı ayarlama fonksiyonu
    void konus(string);         // cihazın konuşma fonksiyonu
    void ledGoster();           // cihazın LED'ini yakma fonksiyonu
    string dinle();             // cihazın dinleme fonksiyonu
    void kapa();                // telsiz kapatma fonksiyonu
};

// telsiz açma fonksiyonu
void Telsiz::ac() {
    ses = 1;     // ses seviyesi varsayılan olarak 1 olarak ayarlanır
}

// telsiz kapatma fonksiyonu
void Telsiz::kapa() {
    ses = 0;     // ses seviyesi 0'a ayarlanarak telsiz kapatılır
}

// LED yakma fonksiyonu
void Telsiz::ledGoster() {
    cout << "Kirmizi LED yaniyor..." << endl;   // kırmızı LED'in yandığını ekrana yazdırır
}

// ses seviyesi ayarlama fonksiyonu
void Telsiz::sesAyarla(int sesA) {
    ses = sesA;   // girilen değere göre ses seviyesi ayarlanır
}

// kanal frekansı ayarlama fonksiyonu
void Telsiz::kanalAyarla(float f) {
    frekans = f;   // girilen değere göre kanal frekansı ayarlanır
}

// cihazın konuşma fonksiyonu
void Telsiz::konus(string k) {
    cumle = k;    // girilen cümleyi kaydeder
    cout << cumle << endl;   // cihazın konuştuğu cümleyi ekrana yazdırır
}

// cihazın dinleme fonksiyonu
string Telsiz::dinle() {
    mesaj = "112 Arandi";    // varsayılan mesaj
    cout << mesaj << endl;   // mesajı ekrana yazdırır
    return mesaj;            // mesajı döndürür
}

// ana fonksiyon
int main() {
    Telsiz telsiz;
    telsiz.ac();
    telsiz.sesAyarla(10);
    telsiz.kanalAyarla(32.4);
    telsiz.konus("Trafik kazasi var, yardim gonderin...");
    telsiz.ledGoster();
    string mesaj = telsiz.dinle();
    cout << "Gelen mesaj: " << mesaj << endl;
    telsiz.konus("Tamam...");
    telsiz.kapa();
    cout << "Ses seviyesi: " << telsiz.ses << endl;
    system("Pause");
}

// Program Çıktısı
/*
Trafik kazasi var, yardim gonderin...
Kirmizi LED yaniyor...
112 Arandi
Gelen mesaj: 112 Arandi
Tamam...
Ses seviyesi: 0
*/

