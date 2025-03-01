#include "Bai_006_Class_PhanSo.h"
using namespace std;

PhanSo::PhanSo() : tuso(0), mauso(1) {}

PhanSo::PhanSo(int tu, int mau) {
    tuso = tu;
    mauso = mau;
    if (mauso == 0) {
        cout << "Mau so khong the bang 0. Vui long nhap lai.\n";
        exit(1);
    }
}

void PhanSo::Nhap() {
    cout << "Nhap tu so: ";
    cin >> tuso;
    do {
        cout << "Nhap mau so (khac 0): ";
        cin >> mauso;
        if (mauso == 0) {
            cout << "Mau so khong the bang 0. Vui long nhap lai.\n";
        }
    } while (mauso == 0);
}

void PhanSo::Xuat() const {
    if (mauso > 0)
    {
        if (mauso == 1)
        {
            cout << tuso;
        }
        else {
            cout << tuso << "/" << mauso;
        }  
    }
    else {
        if (mauso == -1)
        {
            cout << -tuso;
        }
        else {
            cout << -tuso << "/" << -mauso;
        }
    }
}

int PhanSo::findGCD(int a, int b) {
    if (b == 0) return a;
    return findGCD(b, a % b);
}

void PhanSo::rutGon() {
    int gcd = findGCD(abs(tuso), abs(mauso));
    tuso /= gcd;
    mauso /= gcd;

    if (mauso < 0) {
        tuso = -tuso;
        mauso = -mauso;
    }
}

PhanSo PhanSo::tongPhanSo(const PhanSo& ps1, const PhanSo& ps2) {
    PhanSo res;
    res.tuso = ps1.tuso * ps2.mauso + ps2.tuso * ps1.mauso;
    res.mauso = ps1.mauso * ps2.mauso;
    res.rutGon();
    return res;
}

PhanSo PhanSo::hieuPhanSo(const PhanSo& ps1, const PhanSo& ps2) {
    PhanSo res;
    res.tuso = ps1.tuso * ps2.mauso - ps2.tuso * ps1.mauso;
    res.mauso = ps1.mauso * ps2.mauso;
    res.rutGon();
    return res;
}

PhanSo PhanSo::tichPhanSo(const PhanSo& ps1, const PhanSo& ps2) {
    PhanSo res;
    res.tuso = ps1.tuso * ps2.tuso;
    res.mauso = ps1.mauso * ps2.mauso;
    res.rutGon();
    return res;
}

PhanSo PhanSo::thuongPhanSo(const PhanSo& ps1, const PhanSo& ps2) {
    if (ps2.tuso == 0) {
        cout << "Khong the chia cho phan so co tu so = 0.\n";
        exit(1);
    }
    PhanSo res;
    res.tuso = ps1.tuso * ps2.mauso;
    res.mauso = ps1.mauso * ps2.tuso;
    res.rutGon();
    return res;
}
