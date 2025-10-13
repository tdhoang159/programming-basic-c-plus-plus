#include <iostream>
#include <iomanip> 
using namespace std;
int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    if (n <= 0) {
        cout << "Vui long nhap so nguyen duong!" << endl;
        return 0;
    }

    // a. Tính S1 = 1^2 + 2^2 + ... + n^2
    int S1 = 0;
    for (int i = 1; i <= n; i++) {
        S1 += i * i;
    }

    // b. Tính S2 = 1 + 1/2 + 1/3 + ... + 1/n
    double S2 = 0;
    for (int i = 1; i <= n; i++) {
        S2 += 1.0 / i;
    }

    // c. Tính S3 = 1 + 1/3 + 1/5 + ... + 1/(2n-1)
    double S3 = 0;
    for (int i = 1; i <= n; i++) {
        S3 += 1.0 / (2 * i - 1);
    }

    cout << fixed << setprecision(4); 
    cout << "S1 = " << S1 << endl;
    cout << "S2 = " << S2 << endl;
    cout << "S3 = " << S3 << endl;
    return 0;
}
