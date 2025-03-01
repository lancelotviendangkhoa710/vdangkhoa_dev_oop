#include <iostream>
#include "Bai_11_Class_Complex_Number.h"
using namespace std;

int main() {
    ComplexNumbers one, two, res;
    char math; // + - * /
    cout << "Nhap so phuc thu 1: ";
    one.Nhap();
    cout << "Nhap so phuc thu 2: ";
    two.Nhap();
    cout << "Nhap phep toan: ";
    cin >> math;

    Check(math);
    switch (math) {
    case '+':
        res = one.ADD(two);
        break;
    case '-':
        res = one.Subtraction(two);
        break;
    case '*':
        res = one.Multiply(two);
        break;
    case '/':
        if (two.getReal() == 0 && two.getVirtl() == 0) {
            cout << "Khong the chia cho 0, phep toan khong hop le !" << endl;
            break;
        }
        res = one.Divide(two);
        break;
    default:
        cout << "Phep toan khong hop le!" << endl;
        return -1;
    }
    cout << "Ket qua phep tinh 2 so phuc la: ";
    res.Xuat();
    cout << endl;

    return 0;
}
