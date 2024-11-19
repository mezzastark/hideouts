#include <stdio.h>

int main() {
    int matriks[2][2] = {{8, 3}, {3, 8}};

    printf("Matriks:\n");
    for (int baris = 0; baris < 2; baris++) {
        for (int kolom = 0; kolom < 2; kolom++) {
            printf("%d ", matriks[baris][kolom]);
        }
        printf("\n");
    }

    int jumlah = 0;
    for (int baris = 0; baris < 2; baris++) {
        for (int kolom = 0; kolom < 2; kolom++) {
            jumlah += matriks[baris][kolom];
        }
    }
    printf("Jumlah semua elemen matriks: %d\n", jumlah);

    return 0;
}