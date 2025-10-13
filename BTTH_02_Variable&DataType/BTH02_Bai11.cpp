#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x; 
    cout << "Nhap goc x (theo do): ";
    cin >> x;

    double rad = x * M_PI / 180.0;

    double sinx = sin(rad);
    double cosx = cos(rad);
    double tanx = tan(rad);

    cout << "sin(" << x << ") = " << sinx << endl;
    cout << "cos(" << x << ") = " << cosx << endl;
    cout << "tan(" << x << ") = " << tanx << endl;

    return 0;
}
