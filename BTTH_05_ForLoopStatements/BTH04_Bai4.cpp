#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    if (n < 0) {
        cout << "Vui long nhap so nguyen duong!" << endl;
        return 0;
    }
    long long giaiThua = 1;
    for (int i = 1; i <= n; i++) {
        giaiThua *= i;
    }
    cout << n << "! = " << giaiThua << endl;
    return 0;
}