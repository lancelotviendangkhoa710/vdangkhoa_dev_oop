#include "Bai010_Class_Time.h"

Time::Time(int h, int m, int s) : hr(h), min(m), secd(s) {}

void Time::Nhap() {
    cin >> hr >> min >> secd;
}

bool Time::KiemTraHopLe() const {
    return (hr >= 0 && hr < 24) && (min >= 0 && min < 60) && (secd >= 0 && secd < 60);
}

Time Time::getNextTime(const Time& plus) const {
    Time result = *this;

    // Cộng giây và tính phép dư
    result.secd = secd + plus.secd;
    result.min = min + plus.min + result.secd / 60;
    result.secd %= 60;

    // Cộng phút và tính phép dư
    result.hr = hr + plus.hr + result.min / 60;
    result.min %= 60;

    // Nếu quá 24h thì quay vòng lại
    result.hr %= 24;

    return result;
}

void Time::Xuat() const {
    cout << hr << ":" << min << ":" << secd;
}
