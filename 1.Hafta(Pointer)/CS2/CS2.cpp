

#include <iostream>
using namespace std;
int main()
{
	int a = 29;
	int b = 25;
	int* x;
	int* y;
	x = &a;
	y = &b;
	*x = *y + 3;
	*y = *x + 2;
	cout << "x: " << x << endl;
	cout << "*x: " << *x << endl;

	cout << "&x: " << &x << endl;

	cout << "y: " << y << endl;

	cout << "*y: " << *y << endl;

	cout << "&y: " << &y << endl;
	return 0;
}
//EKRAN ÇIKTISI
/*
x: 00000076EDCFF5F4
*x: 28
&x: 00000076EDCFF638
y: 00000076EDCFF614
*y: 30
&y: 00000076EDCFF658
*/
/*
Bu kod, iki integer değişkeni tanımlar ve bu değişkenlere farklı değerler atar. Daha sonra iki integer göstericisi tanımlanır ve bu göstericiler, a ve b değişkenlerinin adreslerini gösterir. Ardından, göstericiler aracılığıyla değişkenlerin değerlerine farklı şekillerde erişilir ve ekrana yazdırılır. Kodun açıklaması şöyledir:

int a = 29; - a değişkeni tanımlanır ve 29 değeri atanır.
int b = 25; - b değişkeni tanımlanır ve 25 değeri atanır.
int* x; - bir integer göstericisi olan x tanımlanır.
int* y; - bir integer göstericisi olan y tanımlanır.
x = &a; - x göstericisi, a değişkeninin adresini gösterir.
y = &b; - y göstericisi, b değişkeninin adresini gösterir.
*x = *y + 3; - x göstericisi aracılığıyla a değişkeninin değeri, y göstericisi aracılığıyla b değişkeninin değerine 3 eklenerek atanır.
*y = *x + 2; - y göstericisi aracılığıyla b değişkeninin değeri, x göstericisi aracılığıyla a değişkeninin değerine 2 eklenerek atanır.
cout << "x: " <<x <<endl; - x göstericisi aracılığıyla a değişkeninin adresi ekrana yazdırılır.
cout << "*x: " <<*x <<endl; - x göstericisi aracılığıyla a değişkeninin değeri ekrana yazdırılır.
cout << "&x: " <<&x <<endl; - x göstericisinin kendisi olan adres ekrana yazdırılır.
cout << "y: " << y<<endl; - y göstericisi aracılığıyla b değişkeninin adresi ekrana yazdırılır.
cout << "*y: " <<*y << endl; - y göstericisi aracılığıyla b değişkeninin değeri ekrana yazdırılır.
cout << "&y: " <<&y <<endl; - y göstericisinin kendisi olan adres ekrana yazdırılır.
return 0; - program sonlandırılır.
*/