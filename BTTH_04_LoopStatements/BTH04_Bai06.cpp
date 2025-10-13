#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int n;
    cout << "Nhap mot so nguyen: ";
    cin >> n;
    if (n < 2) {
        cout << n << " khong phai la so nguyen to." << endl;
    } else {
        bool laNguyenTo = true;
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                laNguyenTo = false;
                break;
            }
        }
        if (laNguyenTo)
            cout << n << " la so nguyen to." << endl;
        else
            cout << n << " khong phai la so nguyen to." << endl;
    }

    return 0;
}
