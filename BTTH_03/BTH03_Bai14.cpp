#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Nhap 3 so nguyen: ";
    cin >> a >> b >> c;
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);
    cout << "Ba so theo thu tu tang dan: " << a << " " << b << " " << c << endl;
    return 0;
}
