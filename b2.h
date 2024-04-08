#pragma once
#ifndef B2_H
#define B2_H

#include "b1.h"
using namespace std;

class B2 : public B1 {
protected:
    int b2;

public:
    B2() {}
    B2(int b1, int b2) : B1(b1), b2(b2) {}
    virtual ~B2() {}

    virtual void show() {
        B1::show();
        cout << "b2 = " << b2 << endl;
    }
};

#endif
