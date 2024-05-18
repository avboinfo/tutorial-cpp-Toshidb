#include <iostream>

using namespace std;

bool prime(int n){
    for (int i = 2; i < n/2; i++){
        if (n%i == 0){
            cout << n << "  non è un numero primo" << endl;
            return false;
        }
    }
    cout << n << " è un numero primo" << endl;
    return true;
}

int main(){
    int n;
    cin >> n;
    prime(n);
}