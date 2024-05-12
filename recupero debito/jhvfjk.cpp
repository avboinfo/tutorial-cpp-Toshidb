#include <iostream>
using namespace std;


int main(){

    int k;
    int n = 20;
    int cont;
    int V[20];

    cout << "scrivi un valore numerico: " << endl;
    cin >> k;

    for (int i = 0; i < n; i++)
    {
        if (i % k)
        {
            V[i] = i;
            cont++;
        }
    }

    for(int i = 0; i < V[i]; i++)
    {
        cout << V[i];
    }

    cout << cont;
}