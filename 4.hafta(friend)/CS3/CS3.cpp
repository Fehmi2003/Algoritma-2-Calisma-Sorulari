#include<iostream>
using namespace std;
class A {
	static int m;
public: 
	A();
	int mAl();
	friend class B;

};
A::A() {
	m++;
}
int A::mAl() {
	return m;
}
int A::m = 0;
class B {
	static int n;
public : 
	B(A& a) { n++; a.m++; }
	int nAl();
};
int B::n = 0;
int B::nAl() {
	return n;
}
int main() {
	A a1;
	A a2;
	B b1(a1);
	B b2(a2);
	A a3;
	B b3(a3);
	cout << "A->m: " << a1.mAl() << endl;
	cout << "B->n: " << b1.nAl() << endl;
	return 0;
}
//PROGRAM ÇIKTISI
/*
A->m: 6
B->n : 3
*/