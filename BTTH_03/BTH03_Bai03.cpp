#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    if (n < 0)
        n = -n;  
    cout << "Tri tuyet doi cua so la: " << n << endl;
    return 0;
}
