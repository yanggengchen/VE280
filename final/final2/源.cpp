#include <iostream>
#include <list>
#include <vector>
using namespace std;


class A {
public:
	void f() { cout << "A::f" << endl; }
	virtual void g() { cout << "A::g" << endl; }
	virtual void h() = 0;
};

class B :public A {
public:
	void f() { cout << "B::f" << endl; }
	void g() { cout << "B::g" << endl; }
	void h() { cout << "B::h" << endl; }
};

class C :public B {
public:
	virtual void f() {
		cout << "C::f" << endl;
	}
	void h() { B::h(); }
};

class D :public C {
public:
	void h() { cout << "D::h" << endl; }
};

int main() {
	A* pa;
	B b;
	C c;
	D d;
	c.f();
	c.h();
	pa = &b;
	pa->f();
	pa->g();
	pa->h();
	pa = &c;
	pa->f();
	pa->g();
	pa->h();
	A& ra = d;
	ra.g();
	ra.h();
	d.f();
	d.g();

}



