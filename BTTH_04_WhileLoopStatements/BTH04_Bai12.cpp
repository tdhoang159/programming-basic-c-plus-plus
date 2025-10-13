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
    int div = 1;
    while (temp >= 10) {
        temp /= 10;
        div *= 10;
    }

    temp = n;
    while (div > 0) {
        int digit = temp / div;
        cout << digit;
        temp %= div;
        div /= 10;
        if (div > 0) cout << " ";
    }
    cout << endl;
    return 0;
}