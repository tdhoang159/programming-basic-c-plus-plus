#include <iostream>
using namespace std;
int main() {
    int h;
    cout << "Nhap chieu cao h: ";
    cin >> h;
    cout << "\nHinh tam giac can: \n";
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= h - i; j++) {
            cout << " ";
        }  // khoảng trắng bên trái
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nHinh tam giac vuong rong goc vuong nam goc trai duoi: \n";
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= i; j++){
            if(i == 1 || j == 1 || i == h || j == i){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << "\nHinh tam giac vuong dac goc vuong nam goc phai duoi: \n";
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= h; j++){
            if(j <= h-i){
                cout << " ";
            }else{
                cout << "*";
            }
        }
        cout << endl;
    }

    cout << "\nHinh tam giac vuong dac goc vuong nam goc trai tren: \n";
    for(int i = h; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nHinh tam giac vuong dac goc vuong nam goc phai tren: \n";
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j < i; j++) {
            cout << " "; 
        }
        for (int j = i; j <= h; j++) {
            cout << "*"; 
        }
        cout << endl;
    }
    return 0;
}