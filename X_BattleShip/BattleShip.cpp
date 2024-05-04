/*
** BattleShip.cpp una classe per giocare alla Battaglia Navale
** Mattei Christian - 22/04/2024
*/

#include <iostream>
#include "BattleField.cpp"

using namespace std;

// DIM, SHIP, MISS, HIT, VOID

class BattleShip {

    private:

    BattleField mappa;
    BattleField campo;

    public:
    BattleShip() {
        mappa = BattleField(VOID);
        campo = BattleField(VOID);
        campo.placeHorizontalShip(3);
        campo.placeVerticalShip(4);
        campo.placeVerticalShip(2);
        campo.placeHorizontalShip(5);
    }

    bool controlloVittoria() {
        for (int x  = 0; x < DIM; x++){
            for( int y = 0; y < DIM; y++){
                if( campo.get(x, y) == SHIP) return false;    
            }
        }
        return true;
    }

    void play() {
        while(!controlloVittoria()) {
            mappa.stampa();
            if(!playHand())break;
        }
    }

    bool playHand() {
        cout << "Inserisci le coordinate di riga e colonna (1 - " << DIM << ") in cui sganciare la bomba (0 per terminare)";
        int x, y;
        cin >> x; if (x == 0 || x < DIM) return false; else x --;
        cin >> y; if (x == 0 || y < DIM) return false; else y --;
        if (campo.get(x,y)==SHIP) {
            mappa.put(x,y,HIT);
            campo.put(x,y,HIT);
        } else mappa.put(x,y,MISS);
        return true;
    }

};