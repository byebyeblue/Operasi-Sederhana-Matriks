#include <iostream>
using namespace std;

int i, j, k, m, n, p, q, jumlah = 0;
int hasil[10][10];  
  int matriks1[10][10], matriks2[10][10];
  int (*ptrM1)[10] = matriks1;
  int (*ptrM2)[10] = matriks2;
  
int main(){
    int menu;
    cout << "==========OPERASI SEDERHANA MATRIKS==========" << endl << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "oleh: \n";
    cout << "Nur Ayu Octarina     1917051039" << endl;
    cout << "Fanirizki Sofiyana   1917051050" << endl;
    cout << "M Ale Habsyi         1917051067" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"<< endl;
    cout << "Menu:" << endl;
    cout << "1. Penjumlahan \n";
    cout << "2. Pengurangan \n";
    cout << "3. Perkalian \n";
    cout << "4. Semuanya \n";
    cout << "Silakan pilih di sini: ";
    cin >> menu;
    
    return 0;
}
