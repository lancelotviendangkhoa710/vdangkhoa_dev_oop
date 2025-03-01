#ifndef BAI_11_CLASS_COMPLEX_NUMBER_H
#define BAI_11_CLASS_COMPLEX_NUMBER_H

#include <iostream>
#include <cmath>
using namespace std;

class ComplexNumbers {
private:
    int real;
    int virtl;

public:
    // Constructor
    ComplexNumbers(int r = 0, int v = 0);

    // Getter and Setter
    int getReal();
    int getVirtl();
    void setReal(int r);
    void setVirtl(int v);

    // Nhap, Xuat
    void Nhap();
    void Xuat();

    // Các phép toán
    ComplexNumbers ADD(ComplexNumbers other);
    ComplexNumbers Subtraction(ComplexNumbers other);
    ComplexNumbers Multiply(ComplexNumbers other);
    ComplexNumbers Divide(ComplexNumbers other);
};

void Check(char& math);

#endif
#pragma once
