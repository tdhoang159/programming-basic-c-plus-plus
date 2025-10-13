#include <iostream>
using namespace std;
int main() {
    int d, r;
    cout << "Nhap chieu dai d: ";
    cin >> d;
    cout << "Nhap chieu rong r: ";
    cin >> r;
    if (d <= 0 || r <= 0) {
        cout << "Vui long nhap so nguyen duong cho d va r!" << endl;
        return 0;
    }
    for (int i = 1; i <= d; i++) {
        for (int j = 1; j <= r; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}