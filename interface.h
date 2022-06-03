// Sesuaikan header
#ifndef INTERFACE_H
#define INTERFACE_H
// Variabel yang menyatakan jumlah korban dan lilin pada peta
#define jumlah_korban 2
#define jumlah_lilin 2

/**
 * @brief Prosedur untuk menambahkan objek baru pada peta 
 * 
 * @param peta double pointer menuju matriks peta
 * @result korban sebanyak jumlah_korban dan lilin sebanyak jumlah_lilin telah ditambahkan
 */
void TambahObjek(char** peta);

/**
 * @brief Prosedur untuk menampilkan peta
 * 
 * @param peta double pointer menuju matriks peta
 * @param n_peta besar peta.
 * @result peta ditampilkan dari berbagai sisi secara berurutan
 */
void TampilkanViewPeta(char** peta,int n_peta);

#endif