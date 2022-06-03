#include "interface.h"
#include "objek.h"
#include <iostream>
using namespace std;

void TambahObjek(char** peta){
    // Deklarasi korban dan lilin
    korban korban[jumlah_korban];
    lilin lilin[jumlah_lilin];
    // Nilai sementara yang akan dimasukkan ke data boneka dan lilin
    int temp_x, temp_y;
    string temp_nama;
    cout << "Masukkan Data Objek"<<endl;
    // Masukkan Data Korban
    for(int i = 0 ; i < jumlah_korban ; i++){
        cout << "Masukkan nama dan koordinat korban ke-"<<i+1<<": ";
        cin >> temp_nama >> temp_x >> temp_y;
        TambahKorban(peta,temp_nama,temp_x,temp_y,&korban[i]);
    }
    // Masukkan Data Lilin
    for(int i = 0 ; i < jumlah_lilin ; i++){
        cout << "Masukkan koordinat lilin ke-"<<i+1<<": ";
        cin >> temp_x >> temp_y;
        TambahLilin(peta,temp_x,temp_y,&lilin[i]);
    }
}

