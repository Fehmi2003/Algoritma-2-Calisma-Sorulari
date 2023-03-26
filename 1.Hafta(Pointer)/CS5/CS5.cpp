#include <iostream>
using namespace std;

int* degistir(int*, int);

int main() {
    int n;
    int* d1; // d1 pointer'ı olarak tanımlanmalı
    cout << "Dizinin Boyutunu giriniz:";
    cin >> n;
    d1 = new int[n];
    cout << "Dizinin elemanlarini giriniz: ";
    for (int i = 0; i < n; i++) {
        cin >> d1[i];
    }
    int* d2 = degistir(d1, n);
    cout << "Dizinin ilk ve son elemansiz kopyasi: ";
    for (int i = 0; i < n - 2; i++) {
        cout << d2[i] << " ";
    }
    delete[] d1; // d1 pointer'ının işaret ettiği bellek alanını serbest bırak
    delete[] d2; // d2 pointer'ının işaret ettiği bellek alanını serbest bırak
    return 0;
}

int* degistir(int* d, int n)
{
    int* copy;
    int s = n - 2; // s değişkeni ayrı bir satırda tanımlanmalı
    copy = new int[s];
    for (int i = 0; i < s; i++) {
        copy[i] = d[i + 1];
    }
    return copy;
}

//CIKTI
/*
Dizinin Boyutunu giriniz:5
Dizinin elemanlarini giriniz: 1 2 3 4 5
Dizinin ilk ve son elemansiz kopyasi: 2 3 4
*/