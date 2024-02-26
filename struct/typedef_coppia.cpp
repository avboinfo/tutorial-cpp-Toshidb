/*
** prova_union.cpp
** Author: IAV 3CIN
** 26/02/2021
*/

#include <iostream>
using namespace std;

/* Il tipo di dato "union" serve per memorizzare oggetti di differenti dimensioni 
** nello stesso spazio, perciò non possono essere usati contemporaneamente.
** La struttura è grande quanto il più grande degli oggetti che può contenere.
*/

struct persona
{
    string nome;
    int eta;
};

typedef struct {int uno; int due; } COPPIA;

int main()
{
  struct persona Gigi, Gigietto;
  COPPIA coppia_eta;
  coppia_eta.uno;
  coppia_eta.due;

  Gigi.nome = "Luigi";
  Gigi.eta = 16;
  Gigietto.nome = "Luigetto";
  Gigietto.eta = 6;
  
  
  
  cout <<  "Gigi si chiama " << Gigi.nome << " ed ha " << Gigi.eta << " anni" << endl;
  cout <<  "Gigietto si chiama " << Gigietto.nome << " ed ha " << Gigietto.eta << " anni" << endl;
  return 0;
}