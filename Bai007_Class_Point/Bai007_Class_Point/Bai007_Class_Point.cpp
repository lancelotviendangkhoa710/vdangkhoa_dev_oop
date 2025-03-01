#include "Bai007_Class_Point.h"
#include <iostream>
#include <cmath>

using namespace std;

//constructor
point::point(int a, int b) {
    this->x = a;
    this->y = b;

}
void point::Nhap() {
   cin >> x >> y;
}

void point::Xuat() {
     cout << "(" << x << "; " << y << ")";
 }
point point::move(point vector) {
    point position;
    position.x = x + vector.x;
    position.y = y + vector.y;
    return position;
}


double point::distance(point position) {
    double dis;
    dis = sqrt((x - position.x) * (x - position.x) + (y - position.y) * (y - position.y));
    return dis;
}