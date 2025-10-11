#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long chieudai, chieurong;
    cout << "Nhap vao chieu dai hinh chu nhat: ";
    cin >> chieudai;
    cout << "Nhap vao chieu rong hinh chu nhat: ";
    cin >> chieurong;
    long long S = chieudai * chieurong;
    long long P = (chieudai + chieurong) * 2;
    cout << "Dien tich hinh chu nhat: S = " << S << endl;
    cout << "Chu vi hinh chu nhat: P = " << P << endl;
    return 0;
}