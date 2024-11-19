#include <stdio.h>
int ganjil(int nmr) {
    return nmr % 2 != 0;
}

int main() {
    int nmr;
    
    printf("Masukkan sebuah angka: ");
    scanf("%d", &nmr);

    if (ganjil(nmr)) {
        printf("nilai = 1.\n");
    } else {
        printf("nilai = 0.\n");
    }

    return 0;
}
