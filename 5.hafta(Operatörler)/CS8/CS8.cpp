#include <iostream> 
#include <stdlib.h> 
#include <string> 
#include <cmath> 

using namespace std;

class Tamsayi
{
    int deger;
public:
    friend istream& operator >> (istream& is, Tamsayi& m);
    int operator[](int);
};

istream& operator >> (istream& is, Tamsayi& m)
{
    is >> m.deger;
    return is;
}

int Tamsayi::operator[](int i)
{
    if (deger < pow(10, i))
        return -1;
    else
        return deger / ((int)pow(10, i)) % 10;
}

int main()
{
    Tamsayi nsn;
    cin >> nsn;
    cout << "Sayinin 0. basamagi: " << nsn[0] << endl;
    cout << "Sayinin 2. basamagi: " << nsn[2] << endl;
    system("Pause");
}
