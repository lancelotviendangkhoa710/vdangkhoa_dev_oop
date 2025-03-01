#ifndef DANHSACHSINHVIEN_H
#define DANHSACHSINHVIEN_H

#include <string>
using namespace std;

class SinhVien {
private:
    string maSinhVien;
    string tenSinhVien;
    int tuoi;
    float diemToan;
    float diemVan;
    float diemAnh;

public:
    SinhVien(string maSV, string tenSV, int t, float toan, float van, float anh);
    string getMaSinhVien();
    string getTenSinhVien();
    int getTuoi();
    float getDiemToan();
    float getDiemVan();
    float getDiemAnh();
    float tinhGPA();
};

SinhVien* themSinhVien(SinhVien* danhSach, int& soLuong, SinhVien& sv);
void hienThiSinhVien(SinhVien* sv);
void nhapSinhVien(SinhVien* danhSach, int& soLuong);
void xuatDanhSachSinhVien(SinhVien* danhSach, int soLuong);

#endif
