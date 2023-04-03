#include <iostream> 
#include <string> 

using namespace std;

class EPosta {
public:
    int sayi;
    string* kelimeler;
    string alan, yollayan;
    static int adet;

    EPosta(int ksayi) {
        kelimeler = new string[ksayi];
        sayi = ksayi;
    }

    void oku() {
        cout << "Alanin soyadini giriniz : ";
        cin >> alan;
        cout << "Yollayanin soyadini giriniz : ";
        cin >> yollayan;
        cout << "Mesaji giriniz : ";
        for (int j = 0; j < sayi; j++)
            cin >> kelimeler[j];
        cout << endl;
    }

    ~EPosta() { delete[] kelimeler; }
};

int EPosta::adet = 0;

int main() {
    int k, sayac = 0;
    cout << "Kac tane mail gireceksiniz: ";
    cin >> k;
    EPosta* mail = new EPosta[k]; // Dinamik bellek ayırma
    for (int i = 0; i < k; i++) {
        cout << "Mesajdaki kelime sayisini giriniz: ";
        int kelimeSayisi;
        cin >> kelimeSayisi;
        mail[i] = EPosta(kelimeSayisi);
        if (kelimeSayisi > 10)
            sayac++;
        mail[i].oku();
    }

    cout << "10 kelimeden uzun mesajlarin sayisi " << sayac << endl;
    delete[] mail; // Dinamik bellekten geri alma
    system("Pause");
    return 0;
}
