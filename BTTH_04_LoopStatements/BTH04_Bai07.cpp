#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int choice;
    do {
        cout << "======== MENU ========" << endl;
        cout << "1. Cong (+)" << endl;
        cout << "2. Tru (-)" << endl;
        cout << "3. Nhan (*)" << endl;
        cout << "4. Chia (/)" << endl;
        cout << "5. Thoat" << endl;
        cout << "======================" << endl;
        cout << "Lua chon cua ban: ";
        cin >> choice;
        if (choice >= 1 && choice <= 4) {
            int a, b;
            cout << "Nhap hai so nguyen a va b: ";
            cin >> a >> b;

            switch(choice) {
                case 1:
                    cout << a << " + " << b << " = " << a + b << endl;
                    break;
                case 2:
                    cout << a << " - " << b << " = " << a - b << endl;
                    break;
                case 3:
                    cout << a << " * " << b << " = " << a * b << endl;
                    break;
                case 4:
                    if (b == 0)
                        cout << "Loi chia 0!" << endl;
                    else
                        cout << fixed << setprecision(2)
                             << a << " / " << b << " = " << (float)a / b << endl;
                    break;
            }
        } 
        else if (choice == 5) {
            cout << "Ket thuc chuong trinh." << endl;
        } 
        else {
            cout << "Lua chon khong hop le. Vui long chon lai!" << endl;
        }
        cout << endl; // dòng trống giữa các vòng lặp

    } while (choice != 5);
    return 0;
}
