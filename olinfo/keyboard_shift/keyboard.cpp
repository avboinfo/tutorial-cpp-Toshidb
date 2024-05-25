#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int N;
string S;
string prima = "qwertyuiop";

char spostaadestra(char c){
    int l = prima.size();
    for(int i= 0; i < l-2; i++){
        if(prima[i] == c){
            return prima[i+1];
        }
    }return prima[l-1];
}

int main(){
    ifstream cin("input.txt");
    ofstream cout("output.txt");

    cin >> N;
    cin >> S;

    for(int i = 0; i < N; i++){
        S[i] = spostaadestra(S[i]);
    }
}