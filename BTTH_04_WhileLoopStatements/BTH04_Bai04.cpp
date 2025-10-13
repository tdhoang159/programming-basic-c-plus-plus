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
    int tong = 0;
    int dem = 0;
    while (temp > 0) {
        int chuSo = temp % 10;
        tong += chuSo;
        temp /= 10;
        dem++;
    }
    cout << "So " << n << " co " << dem << " chu so va tong cac chu so la: " << tong << endl;
    return 0;
}