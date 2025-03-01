#include <iostream>
#include "DanhSachSinhVien.h"
#include <limits>
using namespace std;

int main() {
    int soLuong = 0;
    SinhVien* danhSachSinhVien = nullptr;

    cout << "Nhập số lượng sinh viên: ";
    do {
        cin >> soLuong;
        if (soLuong == 0) {
            cout << "Danh sach khong chua sinh vien, Vui long nhap lai";
        }
    } while (!soLuong);

    // Nhập thông tin các sinh viên
    for (int i = 0; i < soLuong; ++i) {
        cout << "Nhập thông tin cho sinh viên thứ " << i + 1 << ":\n";
        nhapSinhVien(danhSachSinhVien, soLuong);
    }

    // Xuất toàn bộ danh sách sinh viên
    cout << "\nDanh sách tất cả sinh viên:\n";
    xuatDanhSachSinhVien(danhSachSinhVien, soLuong);

    // Tìm sinh viên có điểm trung bình cao nhất
    float diemGPAMax = -1;
    int indexMax = -1;

    for (int i = 0; i < soLuong; ++i) {
        float gpa = danhSachSinhVien[i].tinhGPA();
        if (gpa > diemGPAMax) {
            diemGPAMax = gpa;
            indexMax = i;
        }
    }

    // In thông tin của sinh viên có GPA cao nhất
    if (indexMax != -1) {
        cout << "\nSinh viên có điểm trung bình cao nhất là:\n";
        hienThiSinhVien(&danhSachSinhVien[indexMax]);
    }

    // Giải phóng bộ nhớ
    delete[] danhSachSinhVien;

    return 0;
}
