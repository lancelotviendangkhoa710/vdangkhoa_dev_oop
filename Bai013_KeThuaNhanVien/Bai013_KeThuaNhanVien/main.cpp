#include <iostream>
#include "NhanVienVanPhong.h"
#include "NhanVienSanXuat.h"

using namespace std;

int main() {
    cout << "Nhap thong tin nhan vien van phong:"<<endl;

    NhanVienVanPhong nv1;
    nv1.input();
    nv1.Cal_salary();
    nv1.print();

    cout << endl;
    cout << "Nhap thong tin nhan vien san xuat:" << endl;
    NhanVienSanXuat nv2;
    nv2.input();
    nv2.Cal_salary();
    nv2.print();

    return 0;
}

