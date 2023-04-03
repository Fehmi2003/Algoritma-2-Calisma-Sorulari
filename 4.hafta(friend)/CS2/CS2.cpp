#include "stdafx.h" 

#include <iostream> 

#include <stdlib.h> 

using namespace std;



class Test

{

	int deg1;

	const int deg2;

	int& deg3;

	void degistir()

	{

		cout << "merhaba";

	}

public:

	Test(int);

	int bir() const //fonksiyon const oludğu değişken değeri değiştiremez. 

	{

		cout << "hoscakal";

		deg1 *= 2;

	}

	int iki() {

		return deg1;

	}



};

Test::Test(int s) :deg2(s)

{

	deg2 = s; //Sabit değişken değiştirilemez. 

	deg1 = s;

	deg3 = s;

}

int main()

{

	Test t(5);

	const Test z(10);

	t.deg1 = 8; //Private değişken class dışında değiştirilemez. 

	int k = t.iki();

	t.degistir(); //Private değişkene class dışından erişilemez. 

	cout << z.iki(); //Sabit nesneler sadece sabit fonksiyonları çağırabilirler. 

	system("Pause");

}