#include <iostream>
using namespace std;

int main() {
    int thang, nam;
    cout << "Nhap thang: ";
    cin >> thang;
    cout << "Nhap nam: ";
    cin >> nam;
    int soNgay;
    if (thang < 1 || thang > 12) {
        cout << "Thang khong hop le!" << endl;
        return 0;
    }
    switch (thang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            soNgay = 31;
            break;
        case 4: case 6: case 9: case 11:
            soNgay = 30;
            break;
        case 2:
            if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
                soNgay = 29;
            else
                soNgay = 28;
            break;
        default:
            cout << "Thang khong hop le! Vui long nhap tu 1 den 12." << endl;
    }

    cout << "So ngay cua thang " << thang << " nam " << nam << " la " << soNgay << " ngay" << endl;
    return 0;
}
