
#include <iostream>
using namespace std;
int main()
{
    int dizi[5];
    int* gosterge;
    gosterge = dizi;
    *gosterge = 5;
    gosterge++;
    *gosterge = 15;
    gosterge = &dizi[2];
    *gosterge = 25;
    gosterge = dizi;
    *(gosterge + 4) = 30;
    for (int i = 0; i < 5; i++)
    {
        cout << dizi[i] << "";
        cout << endl;

    }
    return 0;
}
/*
Bu kod, bir integer türünden bir dizi oluşturur ve bu dizideki elemanlara farklı şekillerde değer atar. Kodun açıklaması şöyledir:

int dizi[5]; - 5 elemanlı bir integer dizisi tanımlanır.
int* gosterge; - bir integer göstericisi tanımlanır.
gosterge = dizi; - gösterici, dizinin ilk elemanının adresini gösterir.
*gosterge = 5; - göstericinin işaret ettiği adresteki değer 5 olarak atanır.
gosterge++; - gösterici bir sonraki dizi elemanının adresini gösterir.
*gosterge = 15; - göstericinin işaret ettiği adresteki değer 15 olarak atanır.
gosterge = &dizi[2]; - gösterici, dizinin üçüncü elemanının adresini gösterir.
*gosterge = 25; - göstericinin işaret ettiği adresteki değer 25 olarak atanır.
gosterge = dizi; - gösterici, dizinin ilk elemanının adresini gösterir.
*(gosterge + 4) = 30; - göstericinin işaret ettiği adresten dördüncü sonraki elemanın değeri 30 olarak atanır.
Döngü, dizinin her elemanını ekrana yazdırır.
return 0; - programın normal olarak sonlandığını belirtir.
*/