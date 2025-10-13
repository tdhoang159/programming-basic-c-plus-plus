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
    int tongLe = 0;

    while (temp > 0) {
        int chuSo = temp % 10;
        if (chuSo % 2 != 0)
            tongLe += chuSo;
        temp /= 10;
    }
    cout << "Tong cac chu so le cua " << n << " la: " << tongLe << endl;
    return 0;
}
