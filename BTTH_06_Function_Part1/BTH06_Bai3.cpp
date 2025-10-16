#include<iostream>
using namespace std;

double luyThua(double x, long y){
     double tich = 1.0;
     for(int i = 1; i <= y; i++){
        tich *= x;
     }
     return tich;
}

int main() {
    double result = luyThua(3.0, 3);
    cout << result << endl;
    return 0;
}