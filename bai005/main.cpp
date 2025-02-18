#include <bits/stdc++.h>
using namespace std;

struct ComplexNumbers {
    int real;
    int virtl;
};

void Nhap(ComplexNumbers &A) {
    cin >> A.real >> A.virtl;
}

ComplexNumbers ADD(ComplexNumbers one, ComplexNumbers two) {
    ComplexNumbers res;
    res.real = one.real + two.real;
    res.virtl = one.virtl + two.virtl;
    return res;
}

ComplexNumbers Subtraction(ComplexNumbers one, ComplexNumbers two) {
    ComplexNumbers res;
    res.real = one.real - two.real;
    res.virtl = one.virtl - two.virtl;
    return res;
}

ComplexNumbers Multiply(ComplexNumbers one, ComplexNumbers two) {
    ComplexNumbers res;
    res.real = (one.real * two.real) - (one.virtl * two.virtl);
    res.virtl = (one.real * two.virtl) + (one.virtl * two.real);
    return res;
}

ComplexNumbers Divide(ComplexNumbers one, ComplexNumbers two) {
    if (two.real == 0 && two.virtl == 0) {
        cout << "Khong the thuc hien phep tinh!" << endl;
        exit(1);
    }
    ComplexNumbers res;
    res.real = ((one.real * two.real) + (one.virtl * two.virtl)) / (pow(two.real, 2) + pow(two.virtl, 2));
    res.virtl = ((one.virtl * two.real) - (one.real * two.virtl)) / (pow(two.real, 2) + pow(two.virtl, 2));
    return res;
}
void Xuat(ComplexNumbers res) {
    cout << "Ket qua phep tinh la: ";
    if (res.real == 0 && res.virtl == 0) {
        cout << "0";
    } else if (res.real == 0) {
        cout << res.virtl << "i";
    } else if (res.virtl == 0) {
        cout << res.real;
    } else if (res.virtl < 0) {
        cout << res.real << " - " << -res.virtl << "i";
    } else {
        cout << res.real << " + " << res.virtl << "i";
    }
    cout << endl;
}

void Check(char &math) {
    do {
        if (math != '+' && math != '-' && math != '*' && math != '/') {
            cout << "Phep toan khong hop le, vui long nhap lai: ";
            cin >> math;
        }
    } while (math != '+' && math != '-' && math != '*' && math != '/');
}




int main() {
    ComplexNumbers one, two, res;
    char math; // + - * /
    cout << "Nhap so phuc thu 1: ";
    Nhap(one);
    cout << "Nhap so phuc thu 2: ";
    Nhap(two);
    cout << "Nhap phep toan: ";
    cin >> math;

	Check ( math);
    switch (math) {
    case '+':
        res = ADD(one, two);
        break;
    case '-':
        res = Subtraction(one, two);
        break;
    case '*':
        res = Multiply(one, two);
        break;
    case '/':
		if(two.real==0&&two.virtl==0){
			cout<<"Khong the chia cho 0, phep toan khong hop le !";
			break;
		}	
        res = Divide(one, two);
        break;
    default:
        cout << "Phep toan khong hop le!";
        return -1;
    }
    cout << "Ket qua phep tinh 2 so phuc la: ";
    Xuat(res);

    return 0;
}
