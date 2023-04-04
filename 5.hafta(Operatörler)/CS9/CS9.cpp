
#include <iostream> 
#include <stdlib.h> 
#include <string> 

using namespace std;

class Matris {
    int yapici;
    int eleman[3][3];
public:
    Matris(int x0) :yapici(x0) {
        for (int i = 0 ; i < 3; i++)
            for (int j = 0; j < 3; j++)  
                eleman[i][j] = 0;
    }
    Matris() {}

    friend ostream& operator <<(ostream& os, Matris& d);
    friend istream& operator >> (istream& is, Matris& n1);
    Matris operator +(const Matris& k);
};

Matris Matris::operator +(const Matris& k) {
    Matris z;
    cout << "Matrislerin Toplami : " << endl;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            z.eleman[i][j] = eleman[i][j] + k.eleman[i][j];
    return z;
}

ostream& operator<<(ostream& os, Matris& d) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            os << d.eleman[i][j] << " ";
        os << endl;
    }
    return os;
}

istream& operator >>(istream& is, Matris& n1) {
    cout << "Matrisi Giriniz :" << endl;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            is >> n1.eleman[i][j];
    return is;
}

int main() {
    Matris m, n, x;
    cin >> m;
    cin >> n;
    x = m + n;
    cout << x;
    system("Pause");
}
/*
Matrisi Giriniz :
1 2 3
4 5 6
7 8 9
Matrisi Giriniz :
9 8 7
6 5 4
3 2 1
Matrislerin Toplami :
10 10 10
10 10 10
10 10 10
*/