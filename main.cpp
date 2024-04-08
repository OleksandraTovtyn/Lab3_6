#include <iostream>
#include "d1.h"
#include "b1.h"
#include "b2.h"
#include "d1.h"
#include "d2.h"

using namespace std;


int main() {
	setlocale(LC_ALL, "Ukrainian");
	B1* b1 = new B1(4, 5);
	cout << "Розмiр B1: " << sizeof(B1) << endl;
	b1->show();

	B2* b2 = new B2(2, 3);
	cout << "Розмiр B2: " << sizeof(B2) << endl;
	b2->show();

	D1* d1 = new D1(4, 5);
	cout << "Розмiр D1: " << sizeof(D1) << endl;
	d1->show();

	D2* d2 = new D2(6, 7, 8);
	cout << "Розмiр D2: " << sizeof(D2) << endl;
	d2->show();

	delete b1;
	delete b2;
	delete d1;
	delete d2;

	return 0;
}
