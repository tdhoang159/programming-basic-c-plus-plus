#include <iostream>
using namespace std;
int main() {
    int n;
    do {
        cout << "Nhap mot so nguyen duong n > 0: ";
        cin >> n;
        if (n <= 0)
            cout << "Nhap sai! Vui long nhap lai." << endl;
    } while (n <= 0);
    int temp = n;
    int daoNguoc = 0;
    while (temp > 0) {
        int chuSo = temp % 10;
        daoNguoc = daoNguoc * 10 + chuSo;
        temp /= 10;
    }
    cout << "So " << n << " dao nguoc la: " << daoNguoc << endl;
    return 0;
}
