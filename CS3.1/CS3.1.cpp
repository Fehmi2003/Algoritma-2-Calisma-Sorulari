// Bu program, bir sınıf ve bu sınıfın iki örneği üzerinde çalışır.
#include <iostream>

using namespace std;

// Global bir değişken tanımlanır ve değeri 3 olarak atanır.
int a = 3;

// Test sınıfı tanımlanır.
class Test {
    // Sınıfın özellikleri (private bölümünde) tanımlanır.
    int b, c;
public:
    // Sınıfın fonksiyonları (public bölümünde) tanımlanır.
    void atama(int, int); // atama() fonksiyonu, b ve c değişkenlerine değer atar.
    int fon(int&, int = 8); // fon() fonksiyonu, hedef (f) ve isteğe bağlı olarak bir diğer değişken (g) alır, bu değişkenlerle işlem yapar ve bir değer döndürür.
};

// atama() fonksiyonunun tanımı yapılır.
void Test::atama(int d, int e) {
    // d ve e değerleri b ve c değişkenlerine atanır.
    b = d;
    c = e;
    // Global değişken a'nın değeri 5 arttırılır.
    a += 5;
}

// fon() fonksiyonunun tanımı yapılır.
int Test::fon(int& f, int g) {
    // f değeri 3 ile çarpılır.
    f *= 3;
    // g değeri 4 ile çarpılır.
    g *= 4;
    // b değeri 2 arttırılır.
    b += 2;
    // c değeri 3 arttırılır.
    c += 3;
    // f ve g değerleri ekrana yazdırılır.
    cout << f << " " << g << endl;
    // f ve g değerlerinin toplamı döndürülür.
    return f + g;
}

// main() fonksiyonu
int main()
{
    // h ve i değişkenleri tanımlanır ve değerleri sırasıyla 5 ve 6 olarak atanır.
    int h = 5, i = 6;
    // Test sınıfından nsn1 ve nsn2 örnekleri oluşturulur.
    Test nsn1, nsn2;
    // nsn1 örneği üzerinde atama() fonksiyonu çağrılır ve 1 ve 3 değerleri b ve c değişkenlerine atanır.
    nsn1.atama(1, 3);
    // nsn2 örneği üzerinde atama() fonksiyonu çağrılır ve 2 ve 4 değerleri b ve c değişkenlerine atanır.
    nsn2.atama(2, 4);
    // a değişkenine, nsn1 örneği üzerinde fon() fonksiyonu çağrılır ve h ve i değişkenleriyle birlikte verilir.
    a = nsn1.fon(h, i);
    // h, i ve a değerleri ekrana yazdırılır.
    cout << h << " " << i << endl;
    return 0;
}
/*
ÇIKTI
1524
15639
4532
457739
*/


