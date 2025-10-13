#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Nhap chuoi ky tu: ";
    getline(cin, s);
    cout << s << endl;
    cout << "Chieu dai cua chuoi la: " << s.length() << endl;
    return 0;
}
