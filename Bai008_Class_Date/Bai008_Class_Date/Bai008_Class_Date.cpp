#include "Bai008_Class_Date.h"
#include <iostream>
using namespace std;

Date::Date() {
    day = 1;
    month = 1;
    year = 2020;
}

void Date::Nhap() {
    do {
        cout << "Nhap ngay: ";
        cin >> day;
        cout << "Nhap thang: ";
        cin >> month;
        cout << "Nhap nam: ";
        cin >> year;

        if (!Valid()) {
            cout << "Ngay nhap khong hop le. Vui long nhap lai.\n";
        }
    } while (!Valid());
}

void Date::Xuat() {
    cout << day << "/" << month << "/" << year << endl;
}

bool Date::isLeapYear() {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int Date::daysInMonth() {
    switch (month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
    case 4: case 6: case 9: case 11:
        return 30;
    case 2:
        return (isLeapYear() ? 29 : 28);
    default:
        return 0;
    }
}

Date Date::getNextDay(int x) {
    Date nextDate = *this;
    nextDate.day += x;
    while (nextDate.day > nextDate.daysInMonth()) {
        nextDate.day -= nextDate.daysInMonth();
        nextDate.month++;
        if (nextDate.month > 12) {
            nextDate.month = 1;
            nextDate.year++;
        }
    }
    return nextDate;
}

bool Date::Valid() {
    if (month < 1 || month > 12) {
        return false;
    }
    if (day < 1 || day > daysInMonth()) {
        return false;
    }
    return true;
}
