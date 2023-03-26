class Ulke {
	string baskent, plaka, karakter, dil;
	long nufus;
	int telefonkodu;
public:
	
	Ulke(string b, string p) {
		baskent = b;
		plaka = p;
	}
	Ulke() {}
	Ulke(string b) {
		baskent = b;
	}
	Ulke(long n) {
		nufus = n;
	}
	Ulke(string b, string k, string d) {
		baskent = b;
		karakter = k;
		dil = d;
	}
	Ulke(int t) {
		telefonkodu = t;
	}
};


