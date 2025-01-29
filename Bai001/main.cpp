#include <iostream>
using namespace std;

struct PhanSo {
    int tuso;
    int mauso;
};

void Nhap(PhanSo &x) {
    cout << "Nhap tu so: ";
    cin >> x.tuso;
    do {
        cout << "Nhap mau so (khac 0): ";
        cin >> x.mauso;
        if (x.mauso == 0) {
            cout << "Mau so khong the bang 0. Vui long nhap lai.\n";
        }
    } while (x.mauso == 0);
}

void Xuat(PhanSo x) {
    cout << x.tuso << "/" << x.mauso << endl;
}

int findGCD(int a, int b) {
    if (b == 0) return a;
    return findGCD(b, a % b);
}

void rutGonPhanSo(PhanSo &ps) {
    int gcd = findGCD(abs(ps.tuso), abs(ps.mauso));
    ps.tuso /= gcd;
    ps.mauso /= gcd;

    if (ps.mauso < 0) {
        ps.tuso = -ps.tuso;
        ps.mauso = -ps.mauso;
    }
}

PhanSo tongPhanSo(PhanSo ps1, PhanSo ps2) {
    PhanSo res;
    res.tuso = ps1.tuso * ps2.mauso + ps2.tuso * ps1.mauso;
    res.mauso = ps1.mauso * ps2.mauso;
    rutGonPhanSo(res);
    return res;
}

PhanSo hieuPhanSo(PhanSo ps1, PhanSo ps2) {
    PhanSo res;
    res.tuso = ps1.tuso * ps2.mauso - ps2.tuso * ps1.mauso;
    res.mauso = ps1.mauso * ps2.mauso;
    rutGonPhanSo(res);
    return res;
}

PhanSo tichPhanSo(PhanSo ps1, PhanSo ps2) {
    PhanSo res;
    res.tuso = ps1.tuso * ps2.tuso;
    res.mauso = ps1.mauso * ps2.mauso;
    rutGonPhanSo(res);
    return res;
}

PhanSo thuongPhanSo(PhanSo ps1, PhanSo ps2) {
    if (ps2.tuso == 0) {
        cout << "Khong the chia cho phan so co tu so = 0.\n";
        exit(1); 
    }
    PhanSo res;
    res.tuso = ps1.tuso * ps2.mauso;
    res.mauso = ps1.mauso * ps2.tuso;
    rutGonPhanSo(res);
    return res;
}

int main() {
    PhanSo ps1, ps2;
    char pheptoan;
    cout << "Nhap phan so thu 1" << endl;
    Nhap(ps1);
    cout << "Nhap phan so thu 2" << endl;
    Nhap(ps2);

    cout << "Hai phan so vua nhap la: " << endl;
    Xuat(ps1);
    Xuat(ps2);

    cout << "Rut gon phan so 1" << endl;
    rutGonPhanSo(ps1);
    Xuat(ps1);

    cout << "Rut gon phan so 2" << endl;
    rutGonPhanSo(ps2);
    Xuat(ps2);

    cout << "Nhap phep toan (+, -, *, /): ";
    cin >> pheptoan;

    switch (pheptoan) {
        case '+':
            cout << "Tong hai phan so: ";
            Xuat(tongPhanSo(ps1, ps2));
            break;
        case '-':
            cout << "Hieu hai phan so: ";
            Xuat(hieuPhanSo(ps1, ps2));
            break;
        case '*':
            cout << "Tich hai phan so: ";
            Xuat(tichPhanSo(ps1, ps2));
            break;
        case '/':
            cout << "Thuong hai phan so: ";
            Xuat(thuongPhanSo(ps1, ps2));
            break;
        default:
            cout << "Phep toan khong hop le.\n";
    }

    return 0;
}
