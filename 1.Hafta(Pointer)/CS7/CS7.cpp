#include<iostream>
using namespace std;
int main() {
	// Kullanıcıdan dizinin boyutunu al
	int n;
	// Bellekten dinamik olarak bir tamsayı dizisi oluştur
	int* list = new int();
	cout << "Veri serisinin boyutunu giriniz: ";
	cin >> n;

	// Bellekten dinamik olarak tamsayı dizisi oluştur
	list = new int[n];

	// Kullanıcıdan verileri al
	cout << "Veri serisini giriniz: ";
	for (int i = 0; i < n; i++) {
		cin >> list[i];
	}

	// Tüm sayac elemanlarını sıfıra ayarla
	int* sayac = new int[n];
	for (int i = 0; i < n; i++) {
		sayac[i] = 0;
	}

	// Sayac dizisini güncelle ve en büyük sayıya sahip elemanın indeksini bul
	int eb = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (list[i] == list[j]) {
				sayac[i]++;
			}
		}
		if (sayac[i] > sayac[eb])
			eb = i;
	}

	// Mod'u ekrana yazdır
	cout << "Mod: " << list[eb];

	// Bellekten alınan alanları serbest bırak
	delete[] list;
	delete[] sayac;

	// main fonksiyonu başarıyla sona erdi
	return 0;
}
//CIKTI
/*
Veri serisinin boyutunu giriniz: 10
Veri serisini giriniz: 1 3 2 1 4 2 6 3 1 8
Mod: 1
*/