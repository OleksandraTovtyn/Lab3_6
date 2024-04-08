#pragma once
#ifndef D1_H
#define D1_H

#include "b1.h"
using namespace std;

class D1 : public B1 {
protected:
    int d1;

public:
    D1() {}
    D1(int b1, int d1) : B1(b1), d1(d1) {}
    virtual ~D1() {}

    virtual void show() {
        B1::show();
        cout << "d1 = " << d1 << endl;
    }
};

#endif
