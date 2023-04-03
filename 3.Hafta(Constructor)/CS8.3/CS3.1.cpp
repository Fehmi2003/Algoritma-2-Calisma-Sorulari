#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;

int aylar[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

class Tarih {
public:
	int gun, ay, yil;
	Tarih(int a = 1, int b = 1, int c = 2023) {
		gun = a;
		ay = b;
		yil = c;
	}
	void arttir()
	{
		if (gun == aylar[ay]) {
			gun = 1;
			if (ay == 12)
			{
				ay = 1;
				yil++;
			}
			ay++;
		}
		else
		{
			gun++;
			if (ay == 12)
			{
				ay = 1;
				yil++;
			}
		}
	}

	void goster() {
		cout << gun << "/" << ay << "/" << yil << endl;
	}
};

int main() {
	Tarih tarih(30, 7);
	cout << "Bugun : ";
	tarih.goster();
	cout << "Onumuzdeki 10 gun:" << endl;
	for (int i = 1; i <= 10; i++)
	{
		tarih.arttir();
		tarih.goster();
	}
	system("pause");
}

