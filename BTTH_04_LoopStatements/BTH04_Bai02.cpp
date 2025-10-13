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
    long long tich = 1; 
    for (int i = 1; i <= n; i += 2) { 
        tich *= i;
    }
    cout << "Tich cac so le tu 1 den " << n << " la: " << tich << endl;
    return 0;
}
