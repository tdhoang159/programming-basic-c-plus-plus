#include <iostream>
using namespace std;
int main() {
    int n1, n2;
    cout << "Nhap n1: ";
    cin >> n1;
    cout << "Nhap n2: ";
    cin >> n2;
    if (n1 >= n2 || n1 < 0 || n2 < 0) {
        cout << "Vui long nhap n1 < n2 va ca hai la so nguyen duong!" << endl;
        return 0;
    }
    int dem = 0;

    for (int i = n1; i <= n2; i++) {
        if (i < 2) continue;
        bool laNguyenTo = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                laNguyenTo = false;
                break;
            }
        }
        if (laNguyenTo) {
            cout << i << " ";
            dem++;
        }
    }
    cout << "\nCo " << dem << " so nguyen to tu " << n1 << " den " << n2 << "." << endl;
    return 0;
}