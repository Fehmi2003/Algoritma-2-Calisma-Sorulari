#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;

class Oyuncu {
	string rumuz;
	int puan;
public:
	Oyuncu(string _rumuz, int _puan) :
		rumuz(_rumuz),
		puan(_puan) {}
	Oyuncu(string _rumuz);
	Oyuncu() {};
	int puanAl();
	void durumYazdir();
};

Oyuncu::Oyuncu(string _rumuz)
{
	rumuz = _rumuz;
}

int Oyuncu::puanAl()
{
	return puan;
}

void Oyuncu::durumYazdir()
{
	cout << puan << endl;
	cout << rumuz << endl;
}

int main()
{
	Oyuncu oyuncular[3];
	Oyuncu oyuncu1("Hugo", 300);
	Oyuncu oyuncu2("Mario", 460);
	Oyuncu oyuncu3("Keloglan", 500);
	oyuncular[0] = oyuncu1;
	oyuncular[1] = oyuncu2;
	oyuncular[2] = oyuncu3;
	int max = oyuncular[0].puanAl();
	for (int i = 0; i < 3; i++)
	{
		if (oyuncular[i].puanAl() > max)
		{
			max = oyuncular[i].puanAl();
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if (oyuncular[i].puanAl() == max)
		{
			cout << "Kazanan..." << endl;
			oyuncular[i].durumYazdir();
			break;
		}
	}
	system("pause");
}

//Program Çıktısı
/*
Kazanan...
500
Keloglan
*/