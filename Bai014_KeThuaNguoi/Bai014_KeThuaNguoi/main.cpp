#include "HUMAN.h"
#include "Child_of_human_class.h"
#include <iostream>
using namespace std;

int main() {
    int choice;
    Human* person = nullptr;

    cout << "Chon nghe nghiep: " << endl;
    cout << "1. Sinh vien" << endl;
    cout << "2. Hoc sinh" << endl;
    cout << "3. Cong nhan" << endl;
    cout << "4. Nghe si" << endl;
    cout << "5. Ca si" << endl;
    cout << "Lua chon cua ban: ";
    cin >> choice;
    cin.ignore();

    switch (choice) {
    case 1:
        person = new sinhvien();
        break;
    case 2:
        person = new hocsinh();
        break;
    case 3:
        person = new congnhan();
        break;
    case 4:
        person = new nghesi();
        break;
    case 5:
        person = new casi();
        break;
    default:
        cout << "Lua chon khong hop le!" << endl;
        return 1;
    }

    person->input();
    person->print();

    delete person;
    return 0;
}
