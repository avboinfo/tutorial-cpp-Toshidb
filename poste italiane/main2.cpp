/*
** main.cpp
** Mattei Christian: IAV 3CIN
** 06/04/2024
*/

#include <iostream>
#include "UfficioPostale.cpp"

using namespace std;

int main()
{

    UfficioPostale up = UfficioPostale("Saliceto");
    int risp = 0;
    char cat;
    bool ext = false;
    string a;

    while(!ext){
        cout << "decidi il servizio che vuoi sfruttare" << endl;
        cout << "1 ADD, 2 DEL, 3 STAMPA, 4 ESC" << endl;
        cin >> risp;
        switch(risp){
            case 1:
                cout << "Inserisci la categoria" << endl;
                cin >> cat;
                up.nuovoCliente(cat);
                break;
            case 2:
                cout << "Inserisci la categoria" << endl;
                cin >> cat;
                up.chiamaCliente(cat);
                break;
            case 3:
                up.stampaTabellone();
                break;
            case 4:
                cout << "grazie per l'utilizzo" << endl;
                ext = true;
            default:
            cout << "opzione non valida" << endl; 
        }
    }
}