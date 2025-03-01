#include <iostream>
#include "Bai010_Class_Time.h"
using namespace std;

int main() {
    Time now, plus;

    cout << "Nhap gio hien tai (hour : minute : second): ";
    now.Nhap();

    // Ki?m tra tính h?p l? cho gi? hi?n t?i
    if (!now.KiemTraHopLe()) {
        cout << "Gio khong hop le" << endl;
        return 1;
    }

    cout << "Nhap thoi gian cong them (hour : minute : second): ";
    plus.Nhap();

    // Ki?m tra tính h?p l? cho th?i gian c?ng thêm
    if (plus.KiemTraHopLe()) {
        Time result = now.getNextTime(plus);

        cout << "Thoi gian hien tai: ";
        now.Xuat();
        cout << " + ";
        plus.Xuat();
        cout << " = ";
        result.Xuat();
        cout << endl;
    }
    else {
        cout << "Thoi gian cong khong hop le" << endl;
        return 1;
    }

    return 0;
}
