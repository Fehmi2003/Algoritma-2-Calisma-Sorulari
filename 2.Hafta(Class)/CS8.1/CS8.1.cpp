#include <iostream>
using namespace std;

// Para sınıfı
class Para {
private:
    int liraDegeri; // Para'nın lira değeri
    int elli, yirmiBes, on, bes, bir; // Para'nın 50, 25, 10, 5, 1 kuruş değerlerini tutan değişkenler
public:
    // liraDegeri veri üyesine atama yapacak fonksiyon
    void liraAta(int lira) {
        liraDegeri = lira;
    }

    // Para'nın kuruş değerlerini hesaplayacak fonksiyon
    void donustur() {
        int kurus = liraDegeri * 100; // Lira değerini kuruşa çevirir
        elli = kurus / 50; // 50 kuruşlukların sayısını hesaplar
        kurus %= 50; // kalan kuruşları hesaplar
        yirmiBes = kurus / 25; // 25 kuruşlukların sayısını hesaplar
        kurus %= 25; // kalan kuruşları hesaplar
        on = kurus / 10; // 10 kuruşlukların sayısını hesaplar
        kurus %= 10; // kalan kuruşları hesaplar
        bes = kurus / 5; // 5 kuruşlukların sayısını hesaplar
        kurus %= 5; // kalan kuruşları hesaplar
        bir = kurus; // 1 kuruşlukların sayısını hesaplar
    }

    // Para'nın kuruş değerlerini yazdıracak fonksiyon
    void yaz() {
        cout << "50 kurus: " << elli << endl;
        cout << "25 kurus: " << yirmiBes << endl;
        cout << "10 kurus: " << on << endl;
        cout << "5 kurus: " << bes << endl;
        cout << "1 kurus: " << bir << endl;
    }
};

// Main fonksiyonu
int main() {
    int lira;
    Para para; // Para sınıfından bir nesne oluşturulur

    cout << "Lira degerini girin: ";
    cin >> lira;

    para.liraAta(lira); // Kullanıcı tarafından girilen lira değeri nesneye atanır
    para.donustur(); // Para'nın kuruş değerleri hesaplanır
    para.yaz(); // Para'nın kuruş değerleri yazdırılır

    return 0;
}
