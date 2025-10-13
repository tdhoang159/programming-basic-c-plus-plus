#include <iostream>
using namespace std;
int main() {
    int c;
    cout << "Nhap chieu dai canh hinh vuong c:";
    cin >> c;
    if (c <= 0) {
        cout << "Vui long nhap so nguyen duong lon hon 0!" << endl;
        return 0;
    }
    for (int i = 1; i <= c; i++) {
        for (int j = 1; j <= c; j++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;
    for (int i = 1; i <= c; i++) {
        for (int j = 1; j <= c; j++) {
            if (i == 1 || i == c || j == 1 || j == c) 
            // In * ở hàng đầu, hàng cuối, cột đầu, cột cuối
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}