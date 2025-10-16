#include<iostream>
using namespace std;

long dienTichHCN(int chieuDai, int chieuRong){
    return chieuDai*chieuRong;
}

long chuViHCN(int chieuDai, int chieuRong){
    return (chieuDai + chieuRong)*2;
}

int main(){
    int chieuDai, chieuRong;
    cout << "Nhap chieu dai HCN: ";
    cin >> chieuDai;
    cout << "Nhap chieu rong HCN: ";
    cin >> chieuRong;
    cout << "Dien tich HCN la: " << dienTichHCN(chieuDai, chieuRong) << endl;
    cout << "Chu vi HCN la: " << chuViHCN(chieuDai, chieuRong) << endl;
    return 0;
}