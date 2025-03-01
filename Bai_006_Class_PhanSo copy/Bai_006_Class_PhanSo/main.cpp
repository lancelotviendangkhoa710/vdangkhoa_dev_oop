#include <iostream>
#include "Bai_006_Class_PhanSo.h"

using namespace std;

int main() {
    PhanSo ps1, ps2;
    char pheptoan;

    cout << "Nhap phan so thu 1" << endl;
    ps1.Nhap();
    cout << "Nhap phan so thu 2" << endl;
    ps2.Nhap();

    cout << "Hai phan so vua nhap la: " << endl;
    ps1.Xuat();
    ps2.Xuat();

    cout << "Rut gon phan so 1" << endl;
    ps1.rutGon();
    ps1.Xuat();

    cout << "Rut gon phan so 2" << endl;
    ps2.rutGon();
    ps2.Xuat();

    cout << "Nhap phep toan (+, -, *, /): ";
    cin >> pheptoan;

    switch (pheptoan) {
    case '+':
        cout << "Tong hai phan so: ";
        PhanSo::tongPhanSo(ps1, ps2).Xuat();
        break;
    case '-':
        cout << "Hieu hai phan so: ";
        PhanSo::hieuPhanSo(ps1, ps2).Xuat();
        break;
    case '*':
        cout << "Tich hai phan so: ";
        PhanSo::tichPhanSo(ps1, ps2).Xuat();
        break;
    case '/':
        cout << "Thuong hai phan so: ";
        PhanSo::thuongPhanSo(ps1, ps2).Xuat();
        break;
    default:
        cout << "Phep toan khong hop le.\n";
    }

    return 0;
}
