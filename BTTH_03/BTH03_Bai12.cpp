#include <iostream>
using namespace std;
int main() {
    float a, b;
    cout << "Giai phuong trinh bac nhat: ax + b = 0" << endl;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    if (a == 0) {
        if (b == 0)
            cout << "Phuong trinh co vo so nghiem." << endl;
        else
            cout << "Phuong trinh vo nghiem." << endl;
    } else {
        float x = -b / a;
        cout << "Phuong trinh co nghiem x = " << x << endl;
    }
    return 0;
}
