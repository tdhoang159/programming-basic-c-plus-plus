#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int banKinh;
    const float PI = 3.141593;
    cout << "Nhap ban kinh hinh tron: ";
    cin >> banKinh;
    double S = PI * pow(banKinh, 2);
    double P = 2 * PI * banKinh;
    cout << "Chu vi hinh tron la: " << P << endl;
    cout << "Dien tich hinh tron la: " << S << endl;
    return 0;
}