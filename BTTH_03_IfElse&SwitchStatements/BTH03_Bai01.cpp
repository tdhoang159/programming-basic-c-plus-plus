#include <iostream>
using namespace std;
int main() {
    float diemTB;  // biến lưu điểm trung bình
    cout << "Nhap diem trung binh: ";
    cin >> diemTB;
    if (diemTB >= 5)
        cout << "Sinh vien dau!" << endl;
    else
        cout << "Sinh vien rot!" << endl;
    return 0;
}
