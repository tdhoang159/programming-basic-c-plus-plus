#include <iostream>
using namespace std;
int main() {
    int n1, n2;
    do {
        cout << "Nhap n1 (n1 > 0): ";
        cin >> n1;
        cout << "Nhap n2 (n2 > n1): ";
        cin >> n2;
        if (n1 <= 0 || n2 <= n1)
            cout << "Nhap sai! Vui long nhap lai." << endl;
    } while (n1 <= 0 || n2 <= n1);
    int count = 0;
    int i = n1; 
    while (i <= n2) {
        if (10 % i == 0) {
            cout << i << " ";
            count++;
        }
        i++; // tăng biến đếm
    }
    cout << "\nCo " << count << " so trong khoang tu " << n1 << " den " << n2
         << " la uoc cua 10." << endl;
    return 0;
}
