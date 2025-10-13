#include <iostream>
using namespace std;
int main() {
    int m; 
    cout << "Ban can bao nhieu so: ";
    cin >> m;
    int tong = 0;
    for (int i = 1; i <= m; i++) {
        int x;
        cout << "Nhap so thu " << i << ": ";
        cin >> x;
        tong += x;
    }
    cout << "Tong " << m << " so vua nhap la: " << tong << endl;
    return 0;
}
