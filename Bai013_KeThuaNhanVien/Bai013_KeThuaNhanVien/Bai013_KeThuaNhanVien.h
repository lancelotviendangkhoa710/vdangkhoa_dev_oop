#ifndef NHANVIEN_H
#define NHANVIEN_H

#include <iostream>
#include <string>
using namespace std;

class NhanVien {
protected:
    string name;
    string date;
    double salary;
public:
    NhanVien(string _hoTen, string _ngaySinh) {
        name = _hoTen;
        date = _ngaySinh;
        salary = 0;
    }
    virtual ~NhanVien() {};
    virtual void Cal_salary() = 0;
    virtual void input() {
        cout << "Nhap ho va ten:" << endl;
        getline(cin, name); cin.ignore();
        cout << "Nhap ngay thang nam sinh" << endl;
        getline(cin, date); cin.ignore();
        cout << "Nhap muc luong:" << endl;
        cin >> salary;
    }
    virtual void print() {
        cout << "Ho ten nhan vien: " << name << endl;
        cout << "Ngay thang nam sinh: " << date << endl;
        cout << "Luong: " << salary << endl;
    }
};

#endif // NHANVIEN_H
