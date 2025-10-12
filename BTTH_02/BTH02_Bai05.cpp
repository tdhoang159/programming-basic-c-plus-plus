#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a, b, c;
    cout << "Nhap canh a cua hinh tam giac: ";
    cin >> a;
    cout << "Nhap canh b cua hinh tam giac: ";
    cin >> b;
    cout << "Nhap canh c cua hinh tam giac: ";
    cin >> c;
    double p = (double)(a + b + c) / 2;
    double S = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << "Dien tich hinh tam giac la: " << S << endl;
    return 0;
}