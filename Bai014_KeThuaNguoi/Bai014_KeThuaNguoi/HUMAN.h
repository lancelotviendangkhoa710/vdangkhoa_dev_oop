#ifndef HUMAN_H
#endif // HUMAN_H
#include <iostream>
#include <string>
using namespace std;
class Human {
protected:
    string name;
    int year_old;
public:
    Human(string ten, int tuoi) {
        name = ten;
        year_old = tuoi;

    }
    virtual ~Human() {};
    virtual void input() {
        cout << "Nhap ho va ten:" << endl;
        getline(cin, name); cin.ignore();
        cout << "Nhap tuoi" << endl;
        cin >> year_old;
    }
    virtual void print() {
        cout << "Ho ten nhan vien: " << name << endl;
        cout << year_old << " tuoi" << endl;

    }
};


