#include <iostream>
using namespace std;

  /* Operasi-Sederhana-Matriks
    Penjumlahan, pengurangan, perkalian
    Tugas Pengganti Pertemuan 4
    Implementasi Pointer Array dan Pointer Fungsi Menggunakan C++
    Anggota:
    Nur Ayu Octarina (1917051039)
    Fanirizki Sofiyana (1917051050)
    Ale Habsyi (1917051067)
  */
  
int i, j, k, m, n, p, q, jumlah = 0;
int hasil[10][10];  
  int matriks1[10][10], matriks2[10][10];
  int (*ptrM1)[10] = matriks1;
  int (*ptrM2)[10] = matriks2;

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
