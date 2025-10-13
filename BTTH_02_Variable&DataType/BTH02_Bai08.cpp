#include<iostream>
using namespace std;
int main() {
    long giaMuaVao;
    cout << "Nhap gia mua vao cua san pham: ";
    cin >> giaMuaVao;
    long giaBanRa = giaMuaVao + (double(giaMuaVao * 60)/100);
    cout << "Gia ban ra cua san pham la: " << giaBanRa << endl;
    return 0;
}