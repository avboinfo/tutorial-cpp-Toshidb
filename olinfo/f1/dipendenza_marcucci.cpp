

// NOTE: it is recommended to use this even if you don't understand the following code.

#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

// input data
int N;
vector<int> H, V;
int h;
int v;

int main()
{
    // uncomment the following lines if you want to read/write from files
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    cin >> N;
    H.resize(N);
    for (int i = 0; i < N; i++)
        cin >> H[i];
    V.resize(N);
    for (int i = 0; i < N; i++)
        cin >> V[i];

    for (int i = 0; i < N; i++)
    {
        h = H[i] + H[i + 1];
        v = V[i] + V[i + 1];
       /* if(v>h){
            cout<<"Hamilton"<<endl;
        }else{
            cout<<"Verstappen"<<endl;
        }
        */

        if (H[i]>V[i])
        {
            cout << "Hamilton" << endl;
        }
        else
        {
            cout << "Verstappen" << endl;
        }
    }

    cout << 42 << endl; // print the result
    return 0;
}