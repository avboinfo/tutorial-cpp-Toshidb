/*
** UfficioPostale.cpp
** Mattei Christian: IAV 3CIN
** 08/04/2024
*/

#include <iostream>
#include "Coda.cpp"
using namespace std;

class UfficioPostale
{
private:
    string nome;
    Coda cR = Coda("ricezione", 1000);
    Coda cS = Coda("spedizione", 1000);
    Coda cF = Coda("finanziario", 1000);
    int nR = 0, nS = 0, nF = 0;

public:
    UfficioPostale(string nome)
    {
        this-> nome = nome;
    }

    void nuovoCliente(char servizio)
    {
        switch (servizio)
        {
        case 'r':
            cR.enter(nR++);
            break;

        case 's':
            cS.enter(nS++);
            break;

        case 'f':
            cF.enter(nF++);
            break;

        default:
            cout << "Non abbaimo questo servizio." << endl;
        }
    }

    int chiamaCliente(char servizio)
    {
        switch (servizio)
        {
        case 'r':
            nR--;
            return cR.exit();

        case 's':
            nS--;
            return cS.exit();

        case 'f':
            nF--;
            return cF.exit();

        default:
            cout << "Non disponiamo di questo servizio." << endl;
        }
    }

    void stampaTabellone()
    {
        cout << "Tabellone dell'ufiicio postale" << nome << endl;
        cout << "nello sportello ricezione ci sono " << nR << " persone" << endl;
        cout << "nello sportello spedizione ci sono " << nS << " persone" << endl;
        cout << "nello sportello finanza ci sono " << nF << "persone" << endl;
    }
};