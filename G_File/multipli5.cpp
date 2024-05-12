#include <fstream>
using namespace std;

int main() {
  // Create and open a text file
  ifstream a("input.txt");
  ofstream b("output.txt");

  // Write to the file
 string myText;
 string citta[10];
 int cont = 0;

 while(getline (a, myText)) {
  citta[cont] = myText,
  cont++;
 }
  for(int i = 0; i < 10; i++) {
    b << "Città numero #" << i << ": " << citta[i] << endl;
  }
  
}