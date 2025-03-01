#include "Bai008_Class_Date.h"
#include <iostream>

using namespace std;

int main() {
    Date n, res;
    int x;
    cout << "Nhap thong tin ngay thang nam:\n";
    n.Nhap();
    n.Xuat();

    cout << "Nhap so ngay tiep theo la :" << endl;
    cin >> x;

    res = n.getNextDay(x);
    cout << x << " ngay tiep theo la:" << endl;
    res.Xuat();

    return 0;
}
