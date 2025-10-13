#include <iostream>
using namespace std;
int main() {
    int h;
    cout << "Nhap chieu cao h: ";
    cin >> h;
    if (h <= 0) {
        cout << "Vui long nhap so nguyen duong lon hon 0!" << endl;
        return 0;
    }
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}