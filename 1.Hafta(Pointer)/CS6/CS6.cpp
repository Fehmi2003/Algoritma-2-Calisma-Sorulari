
#include <iostream>
using namespace std;

int main() {
    double* list = nullptr; // pointer'ı ilk olarak null yapalım
    int n;
    cout << "Diyet programinizin suresini giriniz (hafta sayisi): ";
    cin >> n;
    list = new double[n]; // n elemanlı bir dizi için bellek ayrılması
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". hafta kilonuz: ";
        cin >> list[i];
    }
    cout << "Bu diyet programi ile toplam " << list[0] - list[n - 1] << " kilo kaybettiniz.";

    delete[] list; // bellek bloğunun serbest bırakılması
    return 0;
}

/*
Bu program, bir diyet programı için kaybedilen kilo hesaplaması yapar.

İlk olarak, kullanıcıdan kaç hafta boyunca diyet yaptığını belirten bir sayı girilmesi istenir ve bu sayı "n" değişkeninde saklanır.

Daha sonra, "list" adında bir double pointerı oluşturulur ve başlangıçta yalnızca bir tane double değişken tutar. Daha sonra, "list" tekrar bir double array olarak yeniden boyutlandırılır ve kullanıcıdan "n" haftalık diyet verilerini almak için bir döngü kullanılır.

Son olarak, ilk ve son hafta kiloları arasındaki fark hesaplanır ve kullanıcıya gösterilir. Bellekte ayrılan dinamik bellek alanı, programın sonunda silinir.

*/

//CIKTI
/*
Diyet programinizin suresini giriniz (hafta sayisi): 5
1. hafta kilonuz: 72.3
2. hafta kilonuz: 71.1
3. hafta kilonuz: 69.5
4. hafta kilonuz: 67.8
5. hafta kilonuz: 66.1
Bu diyet programi ile toplam 6.2 kilo kaybettiniz.
*/