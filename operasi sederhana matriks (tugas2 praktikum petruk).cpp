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
