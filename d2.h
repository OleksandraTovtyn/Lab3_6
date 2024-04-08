#pragma once
#ifndef D2_H
#define D2_H

#include "b2.h"
using namespace std;

class D2 : public B2 {
protected:
    int d2;

public:
    D2() {}
    D2(int b1, int b2, int d2) : B2(b1, b2), d2(d2) {}
    virtual ~D2() {}

    virtual void show() {
        B2::show();
        cout << "d2 = " << d2 << endl;
    }
    
};

#endif
