#include <iostream>
#include <math.h>

using namespace std;

class Nokta {
    float x, y;
public:
    Nokta(float _x, float _y) :x(_x), y(_y) {}
    float xAl() { return x; }
    float yAl() { return y; }
    friend class Dogru;
};

class Dogru {
    float x, y;
public:
    Dogru(float _x, float _y) :x(_x), y(_y) {}
    float egim();
    Nokta kesisim(Dogru& dogru);
};

float Dogru::egim() {
    return x;
}

Nokta Dogru::kesisim(Dogru& dogru) {
    return Nokta((dogru.y - y) / (x - dogru.x), (x + y) / 2);
}

int main() {
    Dogru dogru1(2.0, 4.0);
    Dogru dogru2(-2.0, 2.0);
    cout << "Dogru-1 egim: " << dogru1.egim() << endl;
    cout << "Dogru-2 egim: " << dogru2.egim() << endl;
    Nokta k = dogru1.kesisim(dogru2);
    cout << "Kesisim (K) noktasi (x,y): " << k.xAl() << "," << k.yAl() << endl;
    getchar();
}
