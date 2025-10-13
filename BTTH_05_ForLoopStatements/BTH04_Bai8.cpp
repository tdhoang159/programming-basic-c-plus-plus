#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    if (n <= 0) {
        cout << "Vui long nhap so nguyen duong lon hon 0!" << endl;
        return 0;
    }
    int tong = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            tong += i;
        }
    }
    cout << "Tong cac so le tu 1 den " << n << " la: " << tong << endl;
    return 0;
}