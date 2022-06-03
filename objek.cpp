#include "objek.h"

void TambahKorban(char** peta, string nama, int x, int y, korban* korban_baru){
    // Tuliskan implementasi untuk mengubah data korban baru dan mengubah simbol pada peta
    // peta sudah terdefenisi

    // Kita masukkan data ke dalam struct
    korban_baru -> nama = nama;
    korban_baru -> inisial_korban = nama[0];
    korban_baru -> koordinat_x_korban = x;
    korban_baru -> koordinat_y_korban = y;

    //Input data ke dalam peta
    peta[korban_baru->koordinat_x_korban][korban_baru->koordinat_y_korban] = korban_baru->inisial_korban;
}
void TambahLilin(char** peta, int x, int y, lilin* lilin_baru){
    // Tuliskan implementasi untuk mengubah data lilin baru dan mengubah simbol pada peta
    // peta sudah terdefenisi

    // kita masukkan data ke dalam struct
    lilin_baru -> koordinat_x_lilin = x;
    lilin_baru -> koordinat_y_lilin = y;
    lilin_baru -> inisial_lilin = 'L';
    lilin_baru -> onoff = on;
    // Input data ke dalam matriks peta
    peta[lilin_baru->koordinat_x_lilin][lilin_baru->koordinat_y_lilin] = lilin_baru -> inisial_lilin;
}
