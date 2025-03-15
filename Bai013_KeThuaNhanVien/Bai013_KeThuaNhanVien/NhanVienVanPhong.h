#ifndef NHANVIENVANPHONG_H
#define NHANVIENVANPHONG_H

#include "Bai013_KeThuaNhanVien.h"
#include <iostream>
using namespace std;

class NhanVienVanPhong : public NhanVien {
private:
    int workdays;
public:
    NhanVienVanPhong() : NhanVien("", ""), workdays(0) {}
    NhanVienVanPhong(string _hoTen, string _ngaySinh, int _soNgayLamViec)
        : NhanVien(_hoTen, _ngaySinh), workdays(_soNgayLamViec) {
        Cal_salary();
    }
    virtual ~NhanVienVanPhong() {}
    virtual void Cal_salary() override {
        salary = workdays * 5000; // tính lương
    }
    virtual void input() override {
        NhanVien::input();
        cout << "Nhap so ngay lam viec:" << endl;
        cin >> workdays;
        Cal_salary();
    }
    virtual void print() override {
        NhanVien::print();
        cout << "So ngay lam viec: " << workdays << endl;
    }
};

#endif 
