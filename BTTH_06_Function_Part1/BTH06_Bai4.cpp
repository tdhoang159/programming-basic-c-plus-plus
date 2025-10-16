#include<iostream>
using namespace std;

long tinhTongTu1DenN(int n) {
    long tong = 0;
    for(int i = 1; i <= n; i++){
        tong += i;
    }
    return tong;
}

long tinhGiaiThua(int n) {
    long tich = 1;
    for(int i = 1; i <= n; i++){
        tich *= i;
    }
    return tich;
}

int main() {
    cout << tinhTongTu1DenN(5) << endl;
    cout << tinhGiaiThua(5) << endl;
    return 0;
}