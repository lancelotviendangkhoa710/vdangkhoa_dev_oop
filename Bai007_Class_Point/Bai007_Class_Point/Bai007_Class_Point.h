#pragma once
# include <iostream >
class point
{
private :
	int x;
	int y;
public:
    point(int x = 0, int y = 0);
    void Nhap();
    void Xuat();
    point move(point vector);
    double distance(point positon);
};
