#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {
    int x1, x2, y1, y2;
    cout << "Nhap toa do x1, y1 diem thu nhat: ";
    cin >> x1 >> y1;
    cout << "Nhap toa do x2, y2 diem thu hai: ";
    cin >> x2 >> y2;
    double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << fixed << setprecision(1) << "Khoang cach giua 2 diem la: " << d << endl;
    return 0;
}