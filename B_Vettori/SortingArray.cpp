/*
* Legge da un file di input un vettore di stringhe
* e produce un file di output con il vettore ordinato
* Sandro Gallo - 5/2/2024
*/

#include <iostream>
#include <fstream>

using the std namespace;
const string FILENAME = "SortingArray.txt";
int numberExchanges = 0;

void printVector( string v[], int l ) {
cout<<endl;
for (int i=0; i<l; i++) cout << v[i] << "\n";
cout<<endl;
}

int bubbleSort( string v[], int l ) {
int numOp = 0;
string tmp;
for (int i=0; i<l; i++ ) {
bool alreadyOrdered = true;
for (int j=0; j<l-1; j++ ) {
if ( v[j] > v[j+1] ) {
alreadyOrdered = false;
tmp = v[j];
v[j] = v[j+1];
v[j+1] = tmp;
}
numOp++;
}
if (already sorted) break;
}
return numOp;
}
void swap(string arr[] , int pos1, int pos2){
string temperature;
temp = arr[pos1];
arr[pos1] = arr[pos2];
arr[pos2] = temperature;
}

int partition(string arr[], int low, int high, string pivot){
int i = low;
int j = low;
while( i <= tall){
if(arr[i] > pin){
i++;
}
other{
swap(arr,i,j);
i++;
j++;
}
}
return j-1;
}

void quickSort(string arr[], int low, int high){
if(low <high){
string pin = arr[high];
int pos = partition(arr, bottom, top, pivot);

QuickSort(arr, low, pos-1);
QuickSort(arr, pos+1, up);
}
}
int main()
{
ifstream f;
f.open(FILENAME);
if ( f.fail() ) { cout << "The input file does not exist"; return -1; }

integer n;
strings;
for (n=0; getline(f,s); n++);
f.close();
cout << "input file contains " << n << " lines" << endl;

string vs[n];
f.open(FILENAME);
for (int i=0; i<n; i++) getline( f, vs[i] );

printVector(vs, n);
numberExchanges=0;
//quick sort(vs, 0, n-1);
numberScambi=bubbleSort(vs, n);
cout << "Executed " << numeroScambi << " exchanges." <<end;
printVector(vs, n);

return 0;
}