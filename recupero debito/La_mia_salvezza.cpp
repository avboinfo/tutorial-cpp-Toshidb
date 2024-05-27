#include <iostream>

using namespace std;

int contaPari(int v[], int l)
{
    int nPari = 0;
    for (int i = 0; i < l; i++){
        if (v[i] % 2 == 0) {
            nPari = nPari+1;
        }
    }return nPari;
}

void riempiVettoreRandom(int v[], int l)
{
    for (int i = 0; i < l; i++)
        v[i] = rand() % 100;
}

void riempiVettore(int v[], int l, int num)
{
    for (int i = 0; i < l; i++)
    {
        v[i] = num;
    }
}

void stampaVettore(int v[], int l)
{
    for (int i = 0; i < l; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    srand(time(NULL));
    int v[10];
    riempiVettore(v, 10, 33);

    stampaVettore(v, 10);

    riempiVettoreRandom(v, 10);

    stampaVettore(v, 10);

    cout << "Il numero di numeri pari che bbiamo trovato è " << contaPari(v, 10);
}