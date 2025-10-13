#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c;
    cout << "Nhap do dai 3 canh cua tam giac: ";
    cin >> a >> b >> c;
    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
        cout << "Ba canh khong hop le de tao thanh tam giac." << endl;
    } else {
        cout << "Ba canh hop le. ";
        if (a == b && b == c) {
            cout << "Day la tam giac deu." << endl;
        } else if (a == b || a == c || b == c) {
            // Check tam giác cân sau đó check xem có vuông không
            if (pow(a, 2) + pow(b, 2) == pow(c, 2) ||
                pow(a, 2) + pow(c, 2) == pow(b, 2) ||
                pow(b, 2) + pow(c, 2) == pow(a, 2)) {
                cout << "Day la tam giac vuong can." << endl;
            } else {
                cout << "Day la tam giac can." << endl;
            }
        } else if (pow(a, 2) + pow(b, 2) == pow(c, 2) ||
                   pow(a, 2) + pow(c, 2) == pow(b, 2) ||
                   pow(b, 2) + pow(c, 2) == pow(a, 2)) {
            cout << "Day la tam giac vuong." << endl;
        } else {
            cout << "Day la tam giac thuong." << endl;
        }
    }
    return 0;
}
