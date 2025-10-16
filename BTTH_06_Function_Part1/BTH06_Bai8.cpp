#include<iostream>
using namespace std;
long dienTichHV(int canh){
    return canh*canh;
}

long chuViHV(int canh){
    return canh*4;
}

void inHinhVuongRong(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == 1 || j == 1 || i == n || j == n){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    cout << dienTichHV(5) << endl;
    cout << chuViHV(5) << endl;
    inHinhVuongRong(5);
    return 0;
}