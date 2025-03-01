#ifndef BAI010_CLASS_TIME_H
#define BAI010_CLASS_TIME_H

#include <iostream>
using namespace std;

class Time {
private:
    int hr;
    int min;
    int secd;

public:
    // Constructor mặc định
    Time(int h = 0, int m = 0, int s = 0);

    // Nhập giờ, phút, giây
    void Nhap();

    // Kiểm tra tính hợp lệ của giờ, phút, giây
    bool KiemTraHopLe() const;

    // Tính thời gian tiếp theo khi cộng thêm thời gian vào
    Time getNextTime(const Time& plus) const;

    // Xuất giờ, phút, giây
    void Xuat() const;
};

#endif
#pragma once
