#ifndef BAI_009_CLASS_DATHUC_H
#define BAI_009_CLASS_DATHUC_H

#include <iostream>
using namespace std;

class DATHUC {
private:
    int bac = 2;  // Bậc của đa thức
    int heso[3];  // Hệ số của các phần: x^2, x^1 và hằng số

public:
    // Constructor mặc định
    DATHUC();

    // Nhập đa thức
    void Nhap();

    // Xuất đa thức
    void Xuat() const;

    // Cộng hai đa thức
    DATHUC ADD(const DATHUC& other) const;

    // Trừ hai đa thức
    DATHUC SUB(const DATHUC& other) const;

    // Nhân hai đa thức
    void MUL(const DATHUC& other) const;
};

void CheckOperation(char& pheptoan);

#endif
