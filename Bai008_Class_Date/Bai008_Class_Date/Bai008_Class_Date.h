#pragma once
#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;
public:
    Date();
    void Nhap();
    void Xuat();
    int getMonth() { return month; }
    bool Valid();
    bool isLeapYear();
    int daysInMonth();
    Date getNextDay(int x);
};
