#include <iostream>
using namespace std;

  /* Operasi-Sederhana-Matriks
    Penjumlahan, pengurangan, perkalian
    Tugas Pengganti Pertemuan 4
    Implementasi Pointer Array dan Pointer Fungsi Menggunakan C++
    Anggota:
    Nur Ayu Octarina (1917051039)
    Fanirizki Sofiyana (1917051050)
    Ale Habsyi Arwendi (1917051067)
  */

int i, j, k, m, n, p, q, jumlah = 0;
int hasil[100][100];  
  int matriks1[100][100], matriks2[100][100];
  int (*ptrM1)[100] = matriks1;
  int (*ptrM2)[100] = matriks2;

void input_elemen(){
    cout << "Masukkan elemen matriks pertama: \n";
    for(i = 0; i < m; i++){
      for(j = 0; j < n; j++){
        cin >> *(*(ptrM1 + i) + j);
      }
    }

    cout << "Masukkan elemen matriks kedua: \n";
    for(i = 0; i < p; i++){
      for(j = 0; j < q; j++){
        cin >> *(*(ptrM2 + i) + j);
      }
    }

    for(i = 0; i < m; i++){
      for(j = 0; j < q; j++){
        for(k = 0; k < p; k++){
          jumlah = jumlah + *(*(ptrM1 + i) + k) * *(*(ptrM2 + k) + j);;
        }
        *(*(hasil+i)+j) = jumlah;
        jumlah = 0;
      }
    }
}
void penjumlahan(){
    cout << "\n>>> Penjumlahan <<<\n";
    if (m!=p || n!=q){
       		cout << "tidak dapat dilakukan penjumlahan karena ordo matriks tidak sama.";
	}
	else {
	    input_elemen();
	    cout<<"\nHasil penjumlahan matriks : \n";
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<(*(*(ptrM1+i)+j) + *(*(ptrM2+i)+j));
                cout<<"\t";
            }
        cout<<endl;
        }
    }
}
void pengurangan(){
    cout << "\n>>> Pengurangan <<<\n";
    if (m!=p || n!=q){
       		cout << "Tidak dapat dilakukan pengurangan karena ordo matriks tidak sama.";
	}
    else {
        input_elemen();
        
        cout << "Hasil pengurangan matriks: \n";
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cout<<(*(*(ptrM1+i)+j) - *(*(ptrM2+i)+j));
            cout << "\t";
        }
        cout << endl;
    }
  }
}

void hasil_perkalian (int *h){
  for(j = 0; j < q; j++){
        cout << *(*(hasil+*h)+j) << "\t";
      }
      cout << endl;
}

void perkalian (){
    cout << "\n>>> Perkalian <<<\n";
    if(n != p)
    cout << "Matriks tidak dapat dikalikan satu sama lain.\n";
  
    else {
        input_elemen();
        
        cout << "Hasil perkalian matriks: \n";
        for(i = 0; i < m; i++)
          hasil_perkalian(&i);
    
    } 
}


int main(){
    int menu;
    cout << "==========OPERASI SEDERHANA MATRIKS==========" << endl << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "oleh: \n";
    cout << "Nur Ayu Octarina     1917051039" << endl;
    cout << "Fanirizki Sofiyana   1917051050" << endl;
    cout << "Ale Habsyi Arwendi   1917051067" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"<< endl;
    cout << "Menu:" << endl;
    cout << "1. Penjumlahan \n";
    cout << "2. Pengurangan \n";
    cout << "3. Perkalian \n";
    cout << "4. Semuanya \n";
    cout << "Silakan pilih di sini: ";
    cin >> menu;
	
    cout << "Ok, sekarang input data ini dulu ya ini dulu ya:" << endl;
    cout << "Masukkan jumlah baris matriks pertama: ";
    cin >> m;
    cout << "Masukkan jumlah kolom matriks pertama: ";
    cin >> n;
    
    cout << "Masukkan jumlah baris matriks kedua: ";
    cin >> p;
    cout << "Masukkan jumlah kolom matriks kedua: ";
    cin >> q;
    
    switch(menu){
        case 1:
        penjumlahan();
        break;
        
        case 2:
        pengurangan();
        break;
        
        case 3:
        perkalian();
        break;
        
        case 4:
        penjumlahan();
        pengurangan();
        perkalian();
        break;
    }
  
  return 0;
}
