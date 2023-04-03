/*
Programda herhangi bir sentaks hatası bulunmamaktadır. Ancak programın çıktısına baktığımızda beklenmedik bir sonuç alınmıştır. Programın mantığı incelendiğinde, sınıfın statik bir veri elemanı olan one'ın nesne oluşumu sırasında arttırıldığı görülmektedir. Programın çıktısı incelendiğinde, obj1 nesnesinin oluşumu sırasında one'ın 3 arttırıldığı ve sonrasında change fonksiyonu aracılığıyla obj1'in veri elemanının değiştirilerek, print fonksiyonu çağrıldığında one'ın 6 olarak yazdırıldığı görülmektedir. Sonrasında change fonksiyonu iki kez çağrılarak, obj1'in veri elemanının önce 4 sonra 5 olarak değiştirilmesi sağlanmıştır. Ancak, one'ın herhangi bir değişikliğe uğramadan 6 olarak kalması beklenirken, 9 olarak yazdırılmıştır. Bunun nedeni, obj2 nesnesinin oluşumu sırasında one'ın tekrar arttırılmasıdır. Bu nedenle, obj2 oluşmadan önce one'ın son değeri olan 6'yı kullanmak için, one'ın arttırılmasının kaldırılması gerekmektedir.

Düzeltme yapılmış hali:
*/
#include<iostream>
#include<iomanip>
using namespace std;

class X {
    static int one;
    int number;
public:
    X(int = 0);
    X& change(int);
    void print();
};

int X::one = 3;

X::X(int a) {
    one += 3;
    number = a;
}

void X::print() {
    cout << one << setw(5) << number << endl;
}

X& X::change(int b) {
    number = b;
    return *this;
}

int main() {
    X obj1(3);
    obj1.print();
    obj1.change(4).change(5).print();
    X obj2;
    obj2.print();
    return 0;
}


//PROGRAM ÇIKTISI

/*
6     3
6     5
9     0
*/

