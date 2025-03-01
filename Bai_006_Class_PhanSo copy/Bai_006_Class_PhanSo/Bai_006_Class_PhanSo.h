#ifndef BAI_006_CLASS_PHANSO_H
#define BAI_006_CLASS_PHANSO_H

#include <iostream>
#include <cmath>

class PhanSo {
private:
    int tuso;
    int mauso;

public:
    PhanSo();
    PhanSo(int tu, int mau);
    void Nhap();
    void Xuat() const;
    void rutGon();
    static int findGCD(int a, int b);
    static PhanSo tongPhanSo(const PhanSo& ps1, const PhanSo& ps2);
    static PhanSo hieuPhanSo(const PhanSo& ps1, const PhanSo& ps2);
    static PhanSo tichPhanSo(const PhanSo& ps1, const PhanSo& ps2);
    static PhanSo thuongPhanSo(const PhanSo& ps1, const PhanSo& ps2);
};

#endif // BAI_006_CLASS_PHANSO_H
