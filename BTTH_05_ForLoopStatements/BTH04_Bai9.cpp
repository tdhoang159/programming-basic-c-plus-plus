#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    if (n <= 0) {
        cout << "Vui long nhap so nguyen duong lon hon 0!" << endl;
        return 0;
    }
    cout << "Bang cuu chuong cua " << n << " la:" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    return 0;
}