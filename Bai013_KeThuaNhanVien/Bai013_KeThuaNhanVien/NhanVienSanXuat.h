#ifndef NHANVIENSANXUAT_H
#define NHANVIENSANXUAT_H

#include "Bai013_KeThuaNhanVien.h"
#include <iostream>
using namespace std;

class NhanVienSanXuat : public NhanVien {
private:
    int products;

public:
    NhanVienSanXuat() : NhanVien("", ""), products(0) {}
    NhanVienSanXuat(string _hoTen, string _ngaySinh, int _soSanPham)
        : NhanVien(_hoTen, _ngaySinh), products(_soSanPham) {
        Cal_salary();
    }

    virtual ~NhanVienSanXuat() {}

    virtual void Cal_salary() override {
        salary = 5000 * products;
    }

    virtual void input() override {
        NhanVien::input();
        cout << "Nhap so san pham:" << endl;
        cin >> products;
        Cal_salary();
    }

    virtual void print() override {
        NhanVien::print();
        cout << "So san pham: " << products << endl;
    }
};

#endif // NHANVIENSANXUAT_H
