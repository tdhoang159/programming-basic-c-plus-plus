#include <iostream>
using namespace std;

bool isSoDoiXung(int n) {
    if (n < 0) return false; 
    int soGoc = n;
    int soDao = 0;
    while (n != 0) {
        int chuSo = n % 10;
        soDao = soDao * 10 + chuSo; 
        n /= 10;
    }
    return soDao == soGoc;
}

int main() {
    int n;
    cout << "Nhap mot so nguyen: ";
    cin >> n;

    if (isSoDoiXung(n))
        cout << n << " la so doi xung." << endl;
    else
        cout << n << " khong phai la so doi xung." << endl;
    return 0;
}
