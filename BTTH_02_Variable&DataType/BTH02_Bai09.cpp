#include<iostream>
using namespace std;
int main() {
    long tongSoLuongSach, tongSoTienMuaSach;
    cout << "Nhap tong so luong sach: ";
    cin >> tongSoLuongSach;
    cout << "Nhap tong so tien mua sach: ";
    cin >> tongSoTienMuaSach;
    double tienThue = double(tongSoTienMuaSach*7.5)/100;
    long tienVanChuyen = 2000 * tongSoLuongSach;
    long tongTienDonHang = tongSoTienMuaSach + tienThue + tienVanChuyen;
    cout << "Tong so tien cua don hang la: " << tongTienDonHang << endl;
    return 0;
}