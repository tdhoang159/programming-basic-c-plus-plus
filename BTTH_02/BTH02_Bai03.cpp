#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    int soNgayLamViec, tienCong1Ngay;
    cout << "Nhap ten: ";
    cin >> name;
    cout << "Nhap so ngay lam viec: ";
    cin >> soNgayLamViec;
    cout << "Nhap so tien cong 1 ngay: ";
    cin >> tienCong1Ngay;
    long long tienLuong = soNgayLamViec * tienCong1Ngay;
    cout << name << " - So tien nhan duoc la: " << tienLuong << " vnd" << endl;
    return 0;
}