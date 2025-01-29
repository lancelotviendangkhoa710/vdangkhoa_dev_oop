#include <iostream>
using namespace std;

// 1. Định nghĩa cấu trúc time 
struct time {
    int hr;
    int min;
    int secd;
};

time getNexttime( time now, time plus) {
    time result;

    // Cộng giây và tính phép dư
    result.secd = now.secd + plus.secd;
    result.min = now.min + plus.min + result.secd / 60;
    result.secd %= 60;

    // Cộng phút và tính phép dư
    result.hr = now.hr + plus.hr + result.min / 60;
    result.min %= 60;

    //nếu quá 24h thì quay vòng lại
    result.hr %= 24;

    return result;
}

int main() {
    time now;
    time plus;

    cout << "Nhap gio hien tai (hour : minute : second): ";
    cin >> now.hr >> now.min >> now.secd;

    // Kiểm tra tính hợp lệ
    if (now.hr >= 24 || now.hr < 0 || now.min >= 60 || now.min < 0 || now.secd >= 60 || now.secd < 0) {
        cout << "Gio khong hop le" << endl;
        return 1;
    }

    cout << "Nhap thoi gian cong them   (hour : minute : second): ";
    cin >> plus.hr >> plus.min >> plus.secd;

    // Kiểm tra tính hợp lệ
    if (plus.hr < 0 || plus.min < 0 || plus.secd < 0) {
        cout << "Thoi gian cong khong hop le" << endl;
        return 1;
    }

    // Tính thời điểm tiếp theo
    time result = getNexttime(now, plus);

    cout << now.hr << ":" << now.min << ":" << now.secd << " + "
         << plus.hr << ":" << plus.min << ":" << plus.secd << " = "
         << result.hr << ":" << result.min << ":" << result.secd << endl;

    return 0;
}
