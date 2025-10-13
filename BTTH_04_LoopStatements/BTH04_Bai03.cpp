#include <iostream>
using namespace std;
int main() {
    int n;
    do {
        cout << "Nhap mot so nguyen duong n > 1: ";
        cin >> n;
        if (n <= 1)
            cout << "Nhap sai! Vui long nhap lai." << endl;
    } while (n <= 1);

    int tongChan = 0;
    int tongLe = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0)
            tongChan += i;
        else
            tongLe += i;
    }
    cout << "Tong cac so chan tu 1 den " << n << " la: " << tongChan << endl;
    cout << "Tong cac so le tu 1 den " << n << " la: " << tongLe << endl;
    return 0;
}
