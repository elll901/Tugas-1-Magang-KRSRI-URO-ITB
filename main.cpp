#include <iostream>
#include "peta.h"
#include "interface.h"

// Sesuaikan header
using namespace std;

int main(){
    int n_peta;
    char** peta;
    cout << "Masukkan ukuran peta: ";
    cin >> n_peta;
    peta = BuatPeta(n_peta);
    PrintPeta(peta,n_peta);
    TambahObjek(peta);
    TampilkanViewPeta(peta,n_peta);
    delete[] peta;
}