#include <stdio.h>
#include <assert.h>
#include <time.h>
#include <cstdlib>
#include <iostream>

using namespace std;

int compra(int N, int M, int A, int B)
{
    int Ncarnet = 0;
    int Nbiglietti = 0;
    int totale, costo;

    while (N > 0)
    {
        totale = N * A;
        if (totale > B)
        {
            N -= M;
            Ncarnet++;
        }
        else
        {
            Nbiglietti = N;
            N = 0;
        }
    }
    costo = (Ncarnet * B) + (Nbiglietti * A);
    return costo;

    return costo;
}

int main()
{
    srand(time(NULL));
    FILE *fr, *fw;
    int N, M, A, B;

    fr = fopen("input.txt", "r");
    fw = fopen("output.txt", "w");

    assert(4 == fscanf(fr, "%d%d%d%d", &N, &M, &A, &B));

    fprintf(fw, "%d\n", compra(N, M, A, B));
    fclose(fr);
    fclose(fw);
    return 0;
}
