#include <iostream>
#include <limits>
using namespace std;
int main() {
    int n;
    long long tong = 0;
    int minVal = INT_MAX;
    int maxVal = INT_MIN;
    cout << "Nhap day so nguyen (nhan Ctrl + Z de ket thuc): " << endl;
    while (cin >> n) {
        tong += n;
        if (n < minVal) minVal = n;
        if (n > maxVal) maxVal = n;
    }
    if (minVal == INT_MAX && maxVal == INT_MIN) {
        cout << "Khong co so nao duoc nhap!" << endl;
    } else {
        cout << "So nho nhat: " << minVal << endl;
        cout << "So lon nhat: " << maxVal << endl;
        cout << "Tong cac so: " << tong << endl;
    }
    return 0;
}
