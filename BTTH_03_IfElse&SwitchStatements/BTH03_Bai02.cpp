#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Nhap so nguyen a: ";
    cin >> a;
    cout << "Nhap so nguyen b: ";
    cin >> b;
    if (a > b)
        cout << "So lon nhat la: " << a << endl;
    else if (b > a)
        cout << "So lon nhat la: " << b << endl;
    else
        cout << "Hai so bang nhau." << endl;
    return 0;
}
