#include<iostream>
using namespace std;

int tongChuSo(int n){
    long tong = 0;
    while(n != 0){
        int chuso = n % 10;
        tong += chuso;
        n /= 10;
    }
    return tong;
}

long soDaoNguoc(int n){
    long soDaoNguoc = 0;
    while(n != 0){
        int chuSoCuoi = n % 10;
        soDaoNguoc =  soDaoNguoc * 10 + chuSoCuoi;
        n /= 10;
    }
    return soDaoNguoc;
}

int main(){
    int n = 1234567;
    cout << tongChuSo(n) << endl;
    cout << soDaoNguoc(n) << endl;
    return 0;
}