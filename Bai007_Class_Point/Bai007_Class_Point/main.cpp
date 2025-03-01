#include "Bai007_Class_Point.h"
#include <iostream>
#include <cmath>

using namespace std;




int main() {
    point A;
    cout << "nhap toa do (x; y): " << endl;
    A.Nhap();
    while (1) {
        cout << "chon thao tac can thuc hien: \n";
        cout << "1. di chuyen theo vector \n";
        cout << "2. khoang cach voi 1 diem khac \n";
        cout << "3. thoat \n";
       
        cout << "Nhap so: ";
        int x; ;

        while (!(cin >> x) || !(x > 0 && x < 4)) {
            cout << "Nhap lai: ";
            cin >> x;
        }

        if (x == 1) {
            cout << "Nhap vector: ";
            point vector;
            vector.Nhap();
            (A.move(vector)).Xuat();
            cout << endl;
        }

        else if (x == 2) {
            cout << "Nhap toa do diem con lai: ";
            point direct;
            direct.Nhap();
            cout << "Khoang cach la: " << A.distance(direct)<<endl;
            cout << endl;
        }

        else if (x == 3) {
            cout << "Ket thuc chuong trinh ";
            return 0;
        }
    }
}