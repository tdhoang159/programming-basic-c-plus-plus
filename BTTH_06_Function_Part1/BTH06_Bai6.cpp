#include<iostream>
using namespace std;

long soDaoNguoc(long n){
    long soDaoNguoc = 0;
    while(n != 0){
        int chuSoCuoi = n % 10;
        soDaoNguoc = soDaoNguoc*10+chuSoCuoi;
        n /= 10;
    }
    return soDaoNguoc;
}
int main() {
    cout << soDaoNguoc(123456789) << endl;
    return 0;
}