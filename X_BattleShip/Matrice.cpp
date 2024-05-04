/*
Matrice.cpp una classe definita da noi che spupazza la matrice come nessuno mai
Mattei Christian 3CIN - 13/04/2024
*/

#include <iostream>
using namespace std;

const int DIM = 6;

class Matrice
{

private:
    int m[10][10];

public:
    Matrice()
    {
        for (int i = 0; i < 10; i++)
            for (int j = 0; j < 10; j++)
                m[i][j] = rand()%100;
    }

    Matrice(int n)
    {
        for (int i = 0; i < 10; i++)
            for (int j = 0; j < 10; j++)
                m[i][j] = n;
    }

    void stampa()
    {
        cout << endl
             << "---------------------------------------------------------------------------" << endl;
        for (int i = 0; i < DIM; i++)
        {
            for (int j = 0; j < DIM; j++)
            {
                printf("&2d", m[i][j]);
                //cout << m[i][j] << "\t";
            }
            cout << endl;
        }
        cout << endl << "---------------------------------------------------------------------------    " << endl;
    }
};
int main()
{
    srand(time(NULL));
    Matrice m1 = Matrice(5);
    Matrice m2 = Matrice();
    m1.stampa();
    m2.stampa();

}