#include "DanhSachSinhVien.h"
#include <iostream>
using namespace std;

SinhVien::SinhVien(string maSV, string tenSV, int t, float toan, float van, float anh)
    : maSinhVien(maSV)
    , tenSinhVien(tenSV),
    tuoi(t), diemToan(toan), diemVan(van), diemAnh(anh) {
}

string SinhVien::getMaSinhVien() {
    return maSinhVien;
}

string SinhVien::getTenSinhVien() {
    return tenSinhVien;
}

int SinhVien::getTuoi() {
    return tuoi;
}

float SinhVien::getDiemToan() {
    return diemToan;
}

float SinhVien::getDiemVan() {
    return diemVan;
}

float SinhVien::getDiemAnh() {
    return diemAnh;
}

float SinhVien::tinhGPA() {
    return (diemToan * 2 + diemVan * 2 + diemAnh * 1) / 5.0;
}

void hienThiSinhVien(SinhVien* sv) {
    cout << "Mã sinh viên: " << sv->getMaSinhVien() << endl;
    cout << "Tên sinh viên: " << sv->getTenSinhVien() << endl;
    cout << "Tuổi: " << sv->getTuoi() << endl;
    cout << "Điểm Toán: " << sv->getDiemToan() << endl;
    cout << "Điểm Văn: " << sv->getDiemVan() << endl;
    cout << "Điểm Anh: " << sv->getDiemAnh() << endl;
    cout << "Điểm trung bình (GPA): " << sv->tinhGPA() << endl;
    cout << "--------------------------" << endl;
}

SinhVien* themSinhVien(SinhVien* danhSach, int& soLuong, SinhVien& sv) {
    SinhVien* newDanhSach = new SinhVien[soLuong + 1];

    for (int i = 0; i < soLuong; ++i) {
        newDanhSach[i] = danhSach[i];
    }

    newDanhSach[soLuong] = sv;

    soLuong++;

    delete[] danhSach;
    return newDanhSach;
}

void nhapSinhVien(SinhVien* danhSach, int& soLuong) {
    string maSV, tenSV;
    int tuoi;
    float diemToan, diemVan, diemAnh;

    cin.ignore();  // Đảm bảo không bị lỗi nhập sau khi dùng cin >> soLuong

    cout << "Nhập mã sinh viên: ";
    getline(cin, maSV);

    cout << "Nhập tên sinh viên: ";
    getline(cin, tenSV);

    cout << "Nhập tuổi của sinh viên: ";
    cin >> tuoi;

    cout << "Nhập điểm Toán của sinh viên: ";
    cin >> diemToan;

    cout << "Nhập điểm Văn của sinh viên: ";
    cin >> diemVan;

    cout << "Nhập điểm Anh của sinh viên: ";
    cin >> diemAnh;

    SinhVien sv(maSV, tenSV, tuoi, diemToan, diemVan, diemAnh);
    danhSach = themSinhVien(danhSach, soLuong, sv);
}

void xuatDanhSachSinhVien(SinhVien* danhSach, int soLuong) {
    for (int i = 0; i < soLuong; ++i) {
        hienThiSinhVien(&danhSach[i]);
    }
}
