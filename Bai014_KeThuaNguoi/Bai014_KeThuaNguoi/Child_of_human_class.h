#ifndef CHILD_H
#define CHILD_H

#include "HUMAN.h"
#include <iostream>
using namespace std;

class sinhvien : public Human {
public:
    sinhvien() : Human(" ", 0) {}

    void input() override {
        cout << "Nhap ho va ten sinh vien:" << endl;
        getline(cin, name);
        cout << "Nhap tuoi sinh vien:" << endl;
        cin >> year_old;
        cin.ignore();
    }

    void print() override {
        cout << "Ho ten sinh vien: " << name << endl;
        cout << year_old << " tuoi" << endl;
    }
};

class hocsinh : public Human {
public:
    hocsinh() : Human(" ", 0) {}

    void input() override {
        cout << "Nhap ho va ten hoc sinh:" << endl;
        getline(cin, name);
        cout << "Nhap tuoi hoc sinh:" << endl;
        cin >> year_old;
        cin.ignore();
    }

    void print() override {
        cout << "Ho ten hoc sinh: " << name << endl;
        cout << year_old << " tuoi" << endl;
    }
};

class congnhan : public Human {
public:
    congnhan() : Human(" ", 0) {}

    void input() override {
        cout << "Nhap ho va ten cong nhan:" << endl;
        getline(cin, name);
        cout << "Nhap tuoi cong nhan:" << endl;
        cin >> year_old;
        cin.ignore();
    }

    void print() override {
        cout << "Ho ten cong nhan: " << name << endl;
        cout << year_old << " tuoi" << endl;
    }
};

class nghesi : public Human {
public:
    nghesi() : Human(" ", 0) {}

    void input() override {
        cout << "Nhap ho va ten nghe si:" << endl;
        getline(cin, name);
        cout << "Nhap tuoi nghe si:" << endl;
        cin >> year_old;
        cin.ignore();
    }

    void print() override {
        cout << "Ho ten nghe si: " << name << endl;
        cout << year_old << " tuoi" << endl;
    }
};

class casi : public Human {
public:
    casi() : Human(" ", 0) {}

    void input() override {
        cout << "Nhap ho va ten ca si:" << endl;
        getline(cin, name);
        cout << "Nhap tuoi ca si:" << endl;
        cin >> year_old;
        cin.ignore();
    }

    void print() override {
        cout << "Ho ten ca si: " << name << endl;
        cout << year_old << " tuoi" << endl;
    }
};

#endif // CHILD_H
