#include <stdio.h>

int main() {
    int jumlahKarakter ;
    char karakter[10];
    int frekuensi[10] = {0}; 

    printf("Masukkan jumlah karakter yang akan dihitung: "); scanf("%d", &jumlahKarakter);

    for (int i = 0; i < jumlahKarakter; i++) {
        printf("Masukkan karakter :"); scanf(" %c", &karakter[i]);
        karakter[i] = tolower(karakter[i]);
    }
    for (int i = 0; i < jumlahKarakter; i++) {
        frekuensi[karakter[i] - 'a']++;
    }
    for (int i = 0; i < 10; i++) {
        if (frekuensi[i] > 0) {
            printf("Frekuensi %c = %d\n", 'a' + i, frekuensi[i]);
        }
    }

    return 0;
}