/*
Aşağıda, kullanıcının belirleyeceği sayı adedi kadar sayıyı okuyan ve en büyük sayıyı ekranda gösteren bir C++ programı verilmiştir.Programın çalışma mantığı şu şekildedir :

Kullanıcıdan sayı adedi(n) istenir ve n adet sayı almak için bir döngü oluşturulur.
Döngü içinde, kullanıcıdan bir sayı alınır ve bu sayı en büyük sayıdan daha büyükse, en büyük sayı olarak kaydedilir.
Döngü bittiğinde, en büyük sayı ekrana yazdırılır.
İşte programın C++ kodları :
	*/

	//EN KISA HALİ

	//#include <iostream>
	//using namespace std;
	//
	//int main() {
	//    int n;
	//    cout << "Kac adet sayi gireceksiniz? ";
	//    cin >> n;
	//
	//    int enBuyuk;
	//    for (int i = 0; i < n; i++) {
	//        int sayi;
	//        cout << i + 1 << ". sayiyi girin: ";
	//        cin >> sayi;
	//        if (i == 0 || sayi > enBuyuk) {
	//            enBuyuk = sayi;
	//        }
	//    }
	//
	//    cout << "En buyuk sayi: " << enBuyuk << endl;
	//
	//    return 0;
	//}
#include <iostream>
using namespace std;
void sayiOku(float*, int);
void yazdir(float*, int);
float maksimumHesapla(float*, int);
int main() {
	float* g;
	int n;
	float ortalama, max, min;
	cout << "Girmek istediginiz sayi adedini giriniz: ";
	cin >> n;
	g = new float[n];
	sayiOku(g, n);
	yazdir(g, n);
	cout << "En buyuk sayi:" << maksimumHesapla(g, n) << endl;
	delete[] g;
	return 0;
}
void sayiOku(float* g, int n)
{
	for (int i = 0; i < n; i++) {
		cout << i + 1 << ". sayi:";
		cin >> g[i];
	}
}
void yazdir(float* g, int n)
{
	for (int i = 0; i < n; i++) {
		cout << g[i] << endl;
	}
}
float maksimumHesapla(float* g, int n)
{
	float m = *g;
	for (int i = 0; i < n; i++) {
		if (g[i] > m) {
			m = g[i];
		}
	}
	return m;
}
