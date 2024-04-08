#pragma once
#ifndef B1_H
#define B1_H

using namespace std;

class B1 {
public:
    int b1;

public:
    B1() : b1(0) {} // Ініціалізувати b1 значенням за замовчуванням
    B1(int b1) : b1(b1) {} // Конструктор з одним аргументом
    B1(int b1, int b2) : b1(b1) {} // Додано конструктор з двома аргументами
    virtual ~B1() {}

    void show() {
        cout << "Тип об'єкта: B1" << endl;
        cout << "b1 = " << b1 << endl;
    }
};







#endif
