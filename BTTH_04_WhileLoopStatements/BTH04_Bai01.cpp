#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Nhap so nguyen n (n > 0): ";
    cin >> n;
    if (n <= 0) {
        cout << "Vui long nhap n > 0!" << endl;
    } else {
        int tong = 0;
        int i = 1;
        while (i <= n) {
            tong += i;
            i++;
        }
        cout << "Tong cac so tu 1 den " << n << " la: " << tong << endl;
    }
    return 0;
}
