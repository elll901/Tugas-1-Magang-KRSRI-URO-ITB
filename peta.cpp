#include "peta.h"
#include <iostream>
using namespace std;

// Petunjuk: Elemen pada double pointer dapat diakses seperti array biasa.
// Misalkan ingin mengakses elemen baris i kolom j, maka cukup buat matrix[i][j]

char** BuatPeta(int n_peta){
  char** peta= new char*[n_peta];
 
  for (int i=0; i<n_peta; i++){
      peta[i] = new char[n_peta];
  }
  
  // Mengisi
  for (int i=0; i<n_peta; i++){
      for(int j=0; j<n_peta; j++){
        if((i == 0) || (i == (n_peta -1) || (j == 0) || (j == n_peta - 1))){
          peta[i][j] = 'X';
        }else{
          peta[i][j] = '-';
        }
      }
  }
  return peta;
}

void PrintPeta(char** peta, int n_peta){
  cout << "Tampilan Peta Dilihat dari Depan" << endl;
  for(int i = 0; i < n_peta ; i++){
    for(int j = 0; j < n_peta ; j++){
      cout << peta[i][j] << ' '; 
    }
    cout << endl;
  }
}

void PrintViewKanan(char** peta, int n_peta){
  // Ambil data
  // peta = BuatPeta(n_peta);
  char peta_kanan[n_peta][n_peta];
  // Mengganti nilai
  for(int i = 0; i < n_peta ; i++){
    for(int j = 0; j < n_peta ; j++){
      peta_kanan[i][j] = peta[n_peta-j-1][i]; 
    }
  }  

  // print
  cout << "Tampilan Peta Dilihat dari Kanan" << endl;
  for(int i = 0; i < n_peta ; i++){
    for(int j = 0; j < n_peta ; j++){
      cout << peta_kanan[i][j] << ' '; 
    }
    cout << endl;
  }
}

void PrintViewKiri(char** peta, int n_peta){
  // peta sudah berupa sebuah matriks

  // Buat matriks baru
  char peta_kiri[n_peta][n_peta];

  // Mengganti nilai ke matriks baru
  for(int i = 0; i < n_peta ; i++){
    for(int j = 0; j < n_peta ; j++){
      peta_kiri[i][j] = peta[j][n_peta-i-1]; 
    }
  }  

  // print
  cout << "Tampilan Peta Dilihat dari Kiri" << endl;
  for(int i = 0; i < n_peta ; i++){
    for(int j = 0; j < n_peta ; j++){
      cout << peta_kiri[i][j] << ' '; 
    }
    cout << endl;
  }
}

void TampilkanViewPeta(char** peta, int n_peta){
    cout << "Tampilan peta dari berbagai sisi" << endl;
    cout << endl;
    PrintPeta(peta,n_peta);
    cout << endl;
    PrintViewKiri(peta,n_peta);
    cout << endl;
    PrintViewKanan(peta,n_peta);
}

