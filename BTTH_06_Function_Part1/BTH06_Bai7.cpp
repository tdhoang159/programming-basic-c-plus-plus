#include<iostream>
#include<cmath>
using namespace std;

bool isSoNguyenTo(long n){
    if(n < 2){
        return false;
    }

    for(int i = 2; i <= sqrt(n); i++){
        if(n %i == 0){
            return false;
        }
    }
    return true;
}

int main() {
    cout << isSoNguyenTo(5) << endl;
    return 0;
}