#pragma once
#ifndef B1_H
#define B1_H

using namespace std;

class B1 {
public:
    int b1;

public:
    B1() : b1(0) {} // ������������ b1 ��������� �� �������������
    B1(int b1) : b1(b1) {} // ����������� � ����� ����������
    B1(int b1, int b2) : b1(b1) {} // ������ ����������� � ����� �����������
    virtual ~B1() {}

    void show() {
        cout << "��� ��'����: B1" << endl;
        cout << "b1 = " << b1 << endl;
    }
};







#endif
