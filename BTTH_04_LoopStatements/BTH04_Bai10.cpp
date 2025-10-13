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
    cout << "Cac thua so nguyen to cua " << n << " la: ";
    int temp = n;
    for (int i = 2; i <= temp; i++) {
        while (temp % i == 0) {
            cout << i << " ";
            temp /= i; 
        }
    }
    cout << endl;
    return 0;
}