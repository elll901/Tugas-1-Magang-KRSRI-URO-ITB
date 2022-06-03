// Tuliskan Header Terlebih dahulu
#ifndef PETA_H
#define PETA_H

/**
 * @brief Fungsi untuk membuat peta persegi dengan ukuran tertentu
 * 
 * @param n_peta menyatakan ukuran peta yang akan dinyatakan dalam matriks nxn
 * @result peta yang telah diisi dengan elemen - dan pembatas berupa x
 */
char** BuatPeta(int n_peta);

/**
 * @brief Prosedur untuk menampilkan peta dari depan
 * 
 * @param peta menyatakan alamat dari matriks yang berisi peta
 * @param n_peta ukuran peta
 * @result peta ditampilkan dari sisi depan
 */
void PrintPeta(char** peta, int n_peta);

/**
 * @brief Prosedur untuk menampilkan peta dari sisi kiri
 * 
 * // jangan lupa isi param di sini
 * @result peta ditampilkan dari sisi kiri
 */
void PrintViewKiri(char** peta, int n_peta); // Silakan sesuaikan parameternya

/**
 * @brief Prosedur untuk menampilkan peta dari sisi kanan
 * 
 * // jangan lupa isi param di sini
 * @result peta ditampilkan dari sisi kanan
 */
void PrintViewKanan(char** peta, int n_peta); // Silakan sesuaikan parameternya

void TampilkanViewPeta(char** peta, int n_peta);

#endif