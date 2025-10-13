#include<iostream>
using namespace std;

void cau_a() {
    //a. Nhập vào 1 kí tự. Xuất ra màn hình mã ASCII của kí tự đó
    char c;
    cout << "Nhap vao 1 ki tu: ";
    cin >> c;
    cout << "Ma ASCII cua ki tu " << c << " la: " << (int)c << endl; 
}

void cau_b() {
    int code;
    cout << "Nhap vao 1 so nguyen: ";
    cin >> code;
    cout << "Ki tu co ma ASCII tuong ung voi " << code << " la: " << (char)code << endl;
}
int main() {
    //cau_a();

    cau_b();
    return 0;
}
