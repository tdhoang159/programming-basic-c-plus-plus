#include <iostream>
#include <string>
using namespace std;
int main() {
    string binary;
    cout << "Nhap mot so nhi phan: ";
    cin >> binary;
    int decimal = 0;
    int n = binary.length();
    for (int i = 0; i < n; i++) {
        if (binary[i] != '0' && binary[i] != '1') {
            cout << "Nhap sai! Day khong phai la so nhi phan." << endl;
            return 1;
        }
        decimal = decimal * 2 + (binary[i] - '0');
    }
    cout << "So thap phan cua " << binary << " la: " << decimal << endl;
    return 0;
}



//code input là int 
// #include <iostream>
// using namespace std;

// int main() {
//     int binary;
//     cout << "Nhap mot so nhi phan (dang int): ";
//     cin >> binary;
//     int decimal = 0;
//     int power = 1;
//     int temp = binary;
//     while (temp > 0) {
//         int lastDigit = temp % 10; 
//         if (lastDigit != 0 && lastDigit != 1) {
//             cout << "Nhap sai! Day khong phai la so nhi phan." << endl;
//             return 1;
//         }
//         decimal += lastDigit * power;
//         power *= 2;
//         temp /= 10;
//     }
//     cout << "So thap phan cua " << binary << " la: " << decimal << endl;
//     return 0;
// }
