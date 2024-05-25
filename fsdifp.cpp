#include <iostream>

using namespace std;

int sommaDiagonale(int m[10][10]){
    int somma = 0;
    for(int i = 0; i < 10; i++){
        somma += m[i][i];
    }
    return somma;
}

int main(){
    int m;
    int i;
    sommaDiagonale(m[i][i]);
}