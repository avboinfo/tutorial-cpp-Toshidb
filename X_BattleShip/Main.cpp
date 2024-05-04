/*
 * Main
 * Author: Mattei Christian
 * Date: 22/04/2024
 */

#include <iostream>
#include "BattleShip.cpp"

using namespace std;

int main() {

    cout << "Gioco della Battaglia navale - Buon suka" << endl;
    BattleShip gioco = BattleShip();
    gioco.play();
    cout << "GAME OVER" << endl;
    return 0;
}