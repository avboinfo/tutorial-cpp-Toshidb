/*
vettore.cpp
classe vettore - Mattei Christian - 04/03/2024
*/

#include <iostream>
using namespace std;

class vettore{
    protected:

    int DIM, len;
    int delta;
    int * v;

    public: 
    vettore(int DIM, int delta){
        this->DIM = DIM;
        this->delta = delta;
        len = 0;
        v = new int[DIM];
    }

    void add(int n) {
        if(len == DIM) {
            cout << "estendo da " << DIM << "a " << DIM + delta << endl;//********** DEBUG 
            int * nuovov = new int [ DIM + delta];
            for(int i = 0; i < DIM; i++) nuovov[i] = v[i];
            DIM += delta;
            delete[] v;
            v = nuovov;
        }
        v[len] = n;
        ++len;
    }

    void print() {
        cout << "contenuto del vettore: ";
        for (int i = 0; i < len; i++) cout <<  v[i] << " ";
        cout << endl;
    }
};


int main(int argc, char const *argv[]){
    vettore vett(10, 2);
    for(int i = 0; i < 100; i++) vett.add(33*i);
    vett.print();

    return 0;
}