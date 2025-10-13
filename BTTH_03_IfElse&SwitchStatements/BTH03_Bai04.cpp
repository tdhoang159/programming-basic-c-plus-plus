#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Nhap so nguyen thu nhat: ";
    cin >> a;
    cout << "Nhap so nguyen thu hai: ";
    cin >> b;
    if (a > b)
        cout << "So thu nhat lon hon so thu hai." << endl;
    else if (a < b)
        cout << "So thu nhat nho hon so thu hai." << endl;
    else
        cout << "Hai so bang nhau." << endl;
    return 0;
}
