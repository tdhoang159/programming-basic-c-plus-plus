#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b;
    char op;

    cout << "Nhap 2 so nguyen va 1 phep toan: ";
    cin >> a >> b >> op;

    switch (op) {
        case '+':
            cout << a << " + " << b << " = " << a + b << endl;
            break;
        case '-':
            cout << a << " - " << b << " = " << a - b << endl;
            break;
        case '*':
            cout << a << " * " << b << " = " << a * b << endl;
            break;
        case '/':
            if (b == 0)
                cout << "Loi chia 0" << endl;
            else
                cout << fixed << setprecision(2) 
                     << a << " / " << b << " = " << (float)a / b << endl;
            break;
        default:
            cout << "Phep toan khong hop le!" << endl;
    }
    return 0;
}
