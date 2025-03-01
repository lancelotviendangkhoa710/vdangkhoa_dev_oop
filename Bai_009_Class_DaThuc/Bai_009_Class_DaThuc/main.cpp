#include <iostream>
#include "Bai_009_Class_DaThuc.h"
using namespace std;

int main() {
    DATHUC first, second, result;
    cout << "Nhap da thuc thu nhat (ax^2 + bx +c)" << endl;
    first.Nhap();
    cout << "Nhap da thuc thu hai (ax^2 + bx +c)" << endl;
    second.Nhap();

    cout << "Nhap phep toan ban muon thuc hien (+ - *): ";
    char pheptoan;
    cin >> pheptoan;

    CheckOperation(pheptoan);

    switch (pheptoan) {
    case '+':
        result = first.ADD(second);
        cout << "Tong cua hai da thuc la: ";
        result.Xuat();
        break;
    case '-':
        result = first.SUB(second);
        cout << "Hieu cua hai da thuc la: ";
        result.Xuat();
        break;
    case '*':
        first.MUL(second);
        break;
    default:
        cout << "Phep toan khong hop le!" << endl;
    }

    return 0;
}
