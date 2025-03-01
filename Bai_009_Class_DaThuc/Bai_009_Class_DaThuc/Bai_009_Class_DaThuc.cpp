#include "Bai_009_Class_DaThuc.h"

DATHUC::DATHUC() {
    // Khởi tạo hệ số mặc định cho đa thức bậc 2
    heso[0] = 0; // hệ số x^2
    heso[1] = 0; // hệ số x
    heso[2] = 0; // hệ số hằng
}

void DATHUC::Nhap() {
    cin >> heso[0] >> heso[1] >> heso[2];
}

void DATHUC::Xuat() const {
    cout << heso[0] << "x^2 ";
    if (heso[1] >= 0) cout << "+ " << heso[1] << "x ";
    else cout << "- " << -heso[1] << "x ";

    if (heso[2] >= 0) cout << "+ " << heso[2];
    else cout << "- " << -heso[2];

    cout << endl;
}

DATHUC DATHUC::ADD(const DATHUC& other) const {
    DATHUC result;
    for (int i = 0; i <= 2; i++) {
        result.heso[i] = heso[i] + other.heso[i];
    }
    return result;
}

DATHUC DATHUC::SUB(const DATHUC& other) const {
    DATHUC result;
    for (int i = 0; i <= 2; i++) {
        result.heso[i] = heso[i] - other.heso[i];
    }
    return result;
}

void DATHUC::MUL(const DATHUC& other) const {
    // Đa thức bậc 4 có dạng aX^4 + bx^3 + cx^2 + dx + e
    int a = heso[0] * other.heso[0]; // Hệ số x^4
    int b = heso[0] * other.heso[1] + heso[1] * other.heso[0]; // Hệ số x^3
    int c = heso[0] * other.heso[2] + heso[1] * other.heso[1] + heso[2] * other.heso[0]; // Hệ số x^2
    int d = heso[1] * other.heso[2] + heso[2] * other.heso[1]; // Hệ số x
    int e = heso[2] * other.heso[2]; // Hệ số hằng

    // Xuất ngay trong hàm
    cout << "Tich cua hai da thuc la: " << a << "x^4 ";
    if (b >= 0) cout << "+ " << b << "x^3 ";
    else cout << "- " << -b << "x^3 ";

    if (c >= 0) cout << "+ " << c << "x^2 ";
    else cout << "- " << -c << "x^2 ";

    if (d >= 0) cout << "+ " << d << "x ";
    else cout << "- " << -d << "x ";

    if (e >= 0) cout << "+ " << e;
    else cout << "- " << -e;

    cout << endl;
}

void CheckOperation(char& pheptoan) {
    do {
        if (pheptoan != '+' && pheptoan != '-' && pheptoan != '*' && pheptoan != '/') {
            cout << "Phep toan khong hop le, vui long nhap lai: ";
            cin >> pheptoan;
        }
    } while (pheptoan != '+' && pheptoan != '-' && pheptoan != '*' && pheptoan != '/');
}
