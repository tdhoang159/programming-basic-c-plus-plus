#include<iostream>
using namespace std;

long tinhTongCacChuSo(long n){
    long tong = 0;
    while(n != 0){
        int chuSo = n % 10;
        tong += chuSo;
        n /= 10;
    }
    return tong;
}

int main(){
    cout << tinhTongCacChuSo(12345) << endl;
    return 0;
}