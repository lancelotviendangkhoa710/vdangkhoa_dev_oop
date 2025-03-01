#include "Bai_11_Class_Complex_Number.h"

ComplexNumbers::ComplexNumbers(int r, int v) : real(r), virtl(v) {}

int ComplexNumbers::getReal() {
    return real;
}

int ComplexNumbers::getVirtl() {
    return virtl;
}

void ComplexNumbers::setReal(int r) {
    real = r;
}

void ComplexNumbers::setVirtl(int v) {
    virtl = v;
}

void ComplexNumbers::Nhap() {
    cout << "Phan thuc: " << endl;
    cin >> real ;
    cout << "Phan ao: " << endl;
    cin >> virtl;
}

void ComplexNumbers::Xuat() {
    if (real == 0 && virtl == 0) {
        cout << "0";
    }
    else if (real == 0) {
        cout << virtl << "i";
    }
    else if (virtl == 0) {
        cout << real;
    }
    else if (virtl < 0) {
        cout << real << " - " << -virtl << "i";
    }
    else {
        cout << real << " + " << virtl << "i";
    }
}

ComplexNumbers ComplexNumbers::ADD(ComplexNumbers other) {
    return ComplexNumbers(real + other.real, virtl + other.virtl);
}

ComplexNumbers ComplexNumbers::Subtraction(ComplexNumbers other) {
    return ComplexNumbers(real - other.real, virtl - other.virtl);
}

ComplexNumbers ComplexNumbers::Multiply(ComplexNumbers other) {
    int r = (real * other.real) - (virtl * other.virtl);
    int v = (real * other.virtl) + (virtl * other.real);
    return ComplexNumbers(r, v);
}

ComplexNumbers ComplexNumbers::Divide(ComplexNumbers other) {
    if (other.real == 0 && other.virtl == 0) {
        cout << "Khong the thuc hien phep tinh!" << endl;
        exit(1);
    }
    int denominator = pow(other.real, 2) + pow(other.virtl, 2);
    int r = ((real * other.real) + (virtl * other.virtl)) / denominator;
    int v = ((virtl * other.real) - (real * other.virtl)) / denominator;
    return ComplexNumbers(r, v);
}

void Check(char& math) {
    do {
        if (math != '+' && math != '-' && math != '*' && math != '/') {
            cout << "Phep toan khong hop le, vui long nhap lai: ";
            cin >> math;
        }
    } while (math != '+' && math != '-' && math != '*' && math != '/');
}
