#include <iostream>
using namespace std;

bool isSoHoanThien(int n) {
    if (n <= 1) {
        return false;
    }
    int tong = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            tong += i;
    }
    return tong == n;
}

int main() {
    int n;
    cout << "Nhap mot so nguyen: ";
    cin >> n;
    if (isSoHoanThien(n))
        cout << n << " la so hoan thien." << endl;
    else
        cout << n << " khong phai la so hoan thien." << endl;
    return 0;
}
