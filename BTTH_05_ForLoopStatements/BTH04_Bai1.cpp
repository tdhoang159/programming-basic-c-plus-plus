#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Nhap mot so nguyen duong n: ";
    cin >> n;
    if (n <= 0) {
        cout << "Vui long nhap so nguyen duong lon hon 0!" << endl;
        return 0;
    }
    int tong = 0;
    for (int i = 1; i <= n; i++) {
        tong += i;
    }
    cout << "Tong cac so tu 1 den " << n << " la: " << tong << endl;
    return 0;
}
