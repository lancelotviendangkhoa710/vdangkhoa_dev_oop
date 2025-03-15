#include <iostream>
#include <vector>
using namespace std;

class Chess {
protected:
    string mau;
    int x, y;
public:
    Chess(string mau, int x, int y) {
        this->mau = mau;
        this->x = x;
        this->y = y;
    }
    virtual ~Chess() {};
    virtual void Move() = 0;
};

// Tướng
class Tuong : public Chess {
public:
    Tuong(string mau, int x, int y) : Chess(mau, x, y) {};
    void Move() {
        cout << "Tuong di tung o mot, di ngang hoac doc trong pham vi cung.\n";
    }
};

// Sĩ
class Si : public Chess {
public:
    Si(string mau, int x, int y) : Chess(mau, x, y) {};
    void Move() {
        cout << "Si di xeo 1 o moi nuoc trong cung.\n";
    }
};

// Tượng
class TuongJ : public Chess {
public:
    TuongJ(string mau, int x, int y) : Chess(mau, x, y) {};
    void Move() {
        cout << "Tuong di xeo 2 o, khong duoc vuot song.\n";
    }
};

// Mã (Ngựa)
class Ma : public Chess {
public:
    Ma(string mau, int x, int y) : Chess(mau, x, y) {};
    void Move() {
        cout << "Ma di chu L, can duong khong di duoc.\n";
    }
};

// Xe
class Xe : public Chess {
public:
    Xe(string mau, int x, int y) : Chess(mau, x, y) {};
    void Move() {
        cout << "Xe di ngang doc khong gioi han neu khong bi can.\n";
    }
};

// Pháo
class Phao : public Chess {
public:
    Phao(string mau, int x, int y) : Chess(mau, x, y) {};
    void Move() {
        cout << "Phao di ngang doc nhu xe, an quan phai nhay qua 1 quan.\n";
    }
};

// Tốt
class Tot : public Chess {
public:
    Tot(string mau, int x, int y) : Chess(mau, x, y) {};
    void Move() {
        cout << "Tot di 1 o moi nuoc, qua song co the di ngang.\n";
    }
};

int main() {
    string trang = "trang";
    string den = "den";
    cout << "Ban co co 32 quan, nhap lua chon 0-31 \n";
    vector<Chess*> b(32); // Tạo bàn cờ chứa 32 con trỏ quân cờ

    // Tướng
    b[0] = new Tuong(trang, 1, 5);
    b[1] = new Tuong(den, 10, 5);

    // Sĩ
    b[2] = new Si(trang, 1, 4);
    b[3] = new Si(trang, 1, 6);
    b[4] = new Si(den, 10, 4);
    b[5] = new Si(den, 10, 6);

    // Tượng
    b[6] = new TuongJ(trang, 1, 3);
    b[7] = new TuongJ(trang, 1, 7);
    b[8] = new TuongJ(den, 10, 3);
    b[9] = new TuongJ(den, 10, 7);

    // Mã (Ngựa)
    b[10] = new Ma(trang, 1, 2);
    b[11] = new Ma(trang, 1, 8);
    b[12] = new Ma(den, 10, 2);
    b[13] = new Ma(den, 10, 8);

    // Xe
    b[14] = new Xe(trang, 1, 1);
    b[15] = new Xe(trang, 1, 9);
    b[16] = new Xe(den, 10, 1);
    b[17] = new Xe(den, 10, 9);

    // Pháo
    b[18] = new Phao(trang, 3, 2);
    b[19] = new Phao(trang, 3, 8);
    b[20] = new Phao(den, 8, 2);
    b[21] = new Phao(den, 8, 8);

    // Tốt
    b[22] = new Tot(trang, 4, 1);
    b[23] = new Tot(trang, 4, 3);
    b[24] = new Tot(trang, 4, 5);
    b[25] = new Tot(trang, 4, 7);
    b[26] = new Tot(trang, 4, 9);

    b[27] = new Tot(den, 7, 1);
    b[28] = new Tot(den, 7, 3);
    b[29] = new Tot(den, 7, 5);
    b[30] = new Tot(den, 7, 7);
    b[31] = new Tot(den, 7, 9);
    cout << " -Tuong 0-1 \n -Si 2-5 \n -Tuongj 6-9 \n -Ma 10-13 \n -Xe 14-17 \n -Phao 18-21 \n -Tot 22-31 \n";
    int choose; cin >> choose;
    b[choose]->Move();
    cout << "Ket thuc chuong trinh ! ";
    return 0;
}
