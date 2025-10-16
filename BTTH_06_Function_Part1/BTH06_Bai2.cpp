#include<iostream>
using namespace std;

long maxValue(int firstValue, int secondValue){
    if(firstValue > secondValue){
        return firstValue;
    }else{
        return secondValue;
    }
}

long minValue(int firstValue, int secondValue){
    if(firstValue < secondValue){
        return firstValue;
    }else{
        return secondValue;
    }
}

int main() {
    int so1, so2;
    cout << "Nhap so thu nhat: ";
    cin >> so1;
    cout << "Nhap so thu hai: ";
    cin >> so2;
    cout << "So lon nhat la: " << maxValue(so1, so2) << endl;
    cout << "So nho nhat la: " << minValue(so1, so2) << endl;
    return 0;
}