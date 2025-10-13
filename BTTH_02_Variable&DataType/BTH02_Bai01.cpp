#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long a;
    cout << "Nhap vao canh hinh vuong: ";
    cin >> a;
    long long S = (long long)(pow(a, 2));
    long long P = 4 * a;
    cout << "Dien tich hinh vuong: S = " << S << endl;
    cout << "Chu vi hinh vuong: P = " << P << endl;
    return 0;
}