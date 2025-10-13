#include <iostream>
using namespace std;
int main() {
    int n1, n2;
    cout << "Nhap n1: ";
    cin >> n1;
    cout << "Nhap n2: ";
    cin >> n2;
    if (n1 >= n2 || n1 <= 0 || n2 <= 0) {
        cout << "Vui long nhap n1 < n2 va ca hai la so nguyen duong!" << endl;
        return 0;
    }
    int demChan = 0, demLe = 0, demUoc10 = 0;
    for (int i = n1; i <= n2; i++) {
        if (i % 2 == 0)
            demChan++;
        else
            demLe++;
        if (10 % i == 0)
            demUoc10++;
    }
    cout << "Trong khoang tu " << n1 << " den " << n2 << ":" << endl;
    cout << "So chan: " << demChan << endl;
    cout << "So le: " << demLe << endl;
    cout << "So la uoc cua 10: " << demUoc10 << endl;
    return 0;
}